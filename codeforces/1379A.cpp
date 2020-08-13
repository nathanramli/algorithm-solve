#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s, s2,
    occur = "aba",
    f_occur = occur + 'c' + occur;

int main(){
    int t, n;
    cin >> t;
    while (t--)
    {
        int yes = 0;
        cin >> n;
        cin >> s;
        s2 = s;
        n = s.size();
        for (int i = 3; i < n - 3; i++)
        {
            if(s[i] == '?' || s[i] == 'c'){
                int _i, done = 2;
                for (int j = i - 1, _i = 0; j >= i - 3; j--, _i++)
                    if(s[j] != '?' && s[j] != occur[_i] && done--) break;
                
                for (int j = i + 1, _i = 0; j < i + 4; j++, _i++)
                {
                    if(s[j] != '?' && s[j] != occur[_i] && done--) break;
                }

                if(done == 2){
                    s[i] = 'c';
                    for (int j = i - 1, _i = 0; j >= i - 3; j--)
                        s[j] = occur[_i++];
                    for (int j = i + 1, _i = 0; j < i + 4; j++)
                        s[j] = occur[_i++];
                    if(s.find(f_occur, s.find(f_occur) + 1) != -1){
                        s = s2;
                        continue;
                    }
                    yes = 1;
                    break;
                }
            }
        }
        if(yes) {
            cout << "Yes\n";
            for (int i = 0; i < n; i++)
                cout << (s[i] == '?' ? 'd' : s[i]);
            cout << '\n';
        }else
            cout << "No\n";
        
    }
    

}