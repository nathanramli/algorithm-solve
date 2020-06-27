#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x = 1;
    string s, decrypt = "";
    cin >> n;
    cin >> s;
    int i = 0;
    while (i < n)
    {
        decrypt += s[i];
        i += x;
        x++;
    }
    cout << decrypt << "\n";
        
}