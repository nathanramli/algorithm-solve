#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, a, b;
    cin >> t;
    string s;
    while (t--)
    {
        s = "";
        cin >> n >> a >> b;
        for(int i = 0; i < b; i++)
            s += 'a' + i;
        s += string(a - b, 'a' + b - 1);
        for(int i = 0; i < n; i++) cout << s[i % a];
        cout << '\n';
    }
}