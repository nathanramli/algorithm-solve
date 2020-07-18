#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        const int len = s.size();
        for (int i = 0; i < len; i++)
        {
            if(s[i] == 'R') cout << 'P';
            else if(s[i] == 'P') cout << 'S';
            else cout << 'R';
        }
        cout << '\n';
    }    
}