#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    string s;
    cin >> t;
    while (t--)
    {
        bool ans = true;
        cin >> n;
        int x[26];
        for(int i=0; i<26;i++)
            x[i] = 0;

        for(int i=0;i<n;i++){
            cin >> s;
            for(int j=0;j<26;j++)
                x[j] += count(s.begin(), s.end(), 'a' + j);
        }
        for(int i=0; i<26;i++)
            if(x[i] % n != 0) ans = false;

        cout << (ans ? "YES" : "NO") << '\n';
    }
}