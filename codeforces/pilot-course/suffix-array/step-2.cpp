#include <bits/stdc++.h>

using namespace std;

void count_sort(vector<int> &p, vector<int> &c){
    int n = p.size();
    vector<int> cnt(n); // count every bucket size classified by the class
    vector<int> new_p(n);
    for(int i = 0; i < c.size(); i++){
        cnt[c[i]]++;
    }

    // store the new position
    vector<int> new_pos(n);
    new_pos[0] = 0;
    for(int i = 1; i < n; i++){
        // ilustrate
        // 0 = 0     = 0    ...
        // 1 = 0 + 1 = 1    => begin from index 1
        // 2 = 1 + 1 = 2    => begin from index 2
        // 3 = 2 + 2 = 4    => begin from index 4
        // 4 = 4 + 2 = 6    ...
        // 5 = 6 + 1 = 7    ...
        // 6 = 7 + 0 = 7    ...
        new_pos[i] = new_pos[i - 1] + cnt[i - 1];
    }
    
    for(int i = 0; i < n; i++){
        int begin_pos = new_pos[c[p[i]]];
        new_p[begin_pos] = p[i]; 
        new_pos[c[p[i]]]++; // increment start pos of the current bucket
    }
    p = new_p;
}

// before optimization
void radix_sort(vector<pair<pair<int, int>, int> > &fc, int n){
    vector<pair<pair<int, int>, int> > new_fc(n);
    vector<vector<int> > bucket(n), bucket_two(n);
    for(int i = 0; i < n; i++){
        bucket[fc[i].first.second].push_back(i);
    }

    for(int i = 0; i < n; i++){
        int m = bucket[i].size();
        for(int j = 0; j < m; j++){
            bucket_two[fc[bucket[i][j]].first.first].push_back(bucket[i][j]);
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        int m = bucket_two[i].size();
        for(int j = 0; j < m; j++){
            new_fc[cnt] = fc[bucket_two[i][j]];
            cnt++;
        }
    }
    fc = new_fc;        
}

int main(){
    string s;
    cin >> s;
    s += '$';
    int n = s.size();
    vector<int> p(n), c(n), new_c(n);
    {
        vector<pair<char, int> > fc(n); // first character
        for(int i = 0; i < n; i++)
            fc[i] = make_pair(s[i], i);
        sort(fc.begin(), fc.end());

        // store the original index
        for(int i = 0; i < n; i++)
            p[i] = fc[i].second;

        c[p[0]] = 0; // assign class
        for(int i = 1; i < n; i++){
            if(fc[i].first == fc[i - 1].first){
                c[p[i]] = c[p[i - 1]];
            }else{ // if not assign different class
                c[p[i]] = c[p[i - 1]] + 1;                
            }
        }
    }

    int k = 0;
    while((1 << k) < n){
        // shift the indices by 2^k
        for(int i = 0; i < n; i++){
            // + n so the modulo doesn't return wrong number because of (minus % mod)
            p[i] = (p[i] - (1 << k) + n) % n;
        }

        // because the right halves is from the sorted class from the last one
        // we just need to sort the left halves
        count_sort(p, c);

        // assign a class
        pair<int, int> prev = {c[p[0]], c[(p[0] + (1 << k)) % n]};
        new_c[p[0]] = 0;
        // assign a class for each pair
        for(int i = 1; i < n; i++){
            pair<int, int> now = {c[p[i]], c[(p[i] + (1 << k)) % n]};
            if(now == prev){ // assign a same class because they're the same
                new_c[p[i]] = new_c[p[i - 1]];
            }else{ // if not assign different class
                new_c[p[i]] = new_c[p[i - 1]] + 1;                
            }
            prev = now;
        }
        c = new_c;
        k++;
    }

    for(int i = 0; i < n; i++){
        cout << p[i] << ' ';
    }
    cout << endl;
    // my understanding is, the lower the class is, the smallest the string is
}