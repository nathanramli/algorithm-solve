#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    vector<int> friends(n + 1);
    vector<int> gifted(n + 1);
    map<int, int> notGifted;
    vector<int> zero;
    for (int i = 1; i <= n; i++)
    {
        cin >> friends[i];
        if (friends[i] != 0){
            if(notGifted.count(friends[i]) > 0){
                notGifted.erase(friends[i]);
            }
            gifted[friends[i]] = 1;
        }else{
            zero.push_back(i);
        }

        if(notGifted.count(i) == 0 && gifted[i] != 1){
            notGifted.insert(pair<int, int>(i, 1));
        }
    }
    for(int i = 1; i <= n; i++){
        if(friends[i] != 0) cout << friends[i];
        else {
            map<int, int>::iterator val = notGifted.begin();
            if(zero.size() == 2){
                val++;
                if(zero[0] != notGifted.begin()->first && zero[1] != val->first){
                    cout << notGifted.begin()->first;
                    notGifted.erase(notGifted.begin());
                }else{
                    cout << val->first;
                    notGifted.erase(val);
                }
            }else if(i == val->first){
                val++;
                cout << val->first;
                notGifted.erase(val);
            }
            else{
                cout << val->first;
                notGifted.erase(val);
            }
            zero.erase(zero.begin());
        }
        cout << (i != n ? " " : "\n");
    }
}