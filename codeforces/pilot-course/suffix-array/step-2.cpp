#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

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
    vector<int> p(n), c(n);
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
        vector<pair<pair<int, int>, int> > fc(n);
        for(int i = 0; i < n; i++){
            // assign a class for each sub
            // c[i] is a class of string on the left halves
            // c[i + (1 << k)] is a class of string on the right halves
            fc[i] = make_pair(make_pair(c[i], c[(i + (1 << k)) % n]), i);
        }
        // sort the pair
        radix_sort(fc, n);

        // store the original index of the pair
        for(int i = 0; i < n; i++){
            p[i] = fc[i].second;
        }

        // assign a class
        c[p[0]] = 0;
        // assign a class for each pair
        for(int i = 1; i < n; i++){
            if(fc[i].first == fc[i - 1].first){ // assign a same class because they're the same
                c[p[i]] = c[p[i - 1]];
            }else{ // if not assign different class
                c[p[i]] = c[p[i - 1]] + 1;                
            }
        }

        k++;
    }

    for(int i = 0; i < n; i++){
        cout << p[i] << ' ';
    }
    cout << endl;
    // my understanding is, the lower the class is, the smallest the string is
}