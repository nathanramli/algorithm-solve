#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if(s == "1" || s == "4" || s == "78") cout << '+';
        else if(s.size() > 2 && s[s.size() - 1] == '5' && s[s.size() - 2] == '3') cout << '-';
        else if(s[0] == '9' && s[s.size() - 1] == '4') cout << '*';
        else cout << '?';
        cout << '\n';
    }
    
}