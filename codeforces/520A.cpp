#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, all = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++) s[i] = tolower(s[i]);
    
    sort(s.begin(), s.end());
    for (int i = 0; i < n && all < 26; i++){
        if(tolower(s[i]) - 97 < all) continue;
        else if(tolower(s[i]) - 97 == all) all++;
        else break;
    }
    cout << (all == 26 ? "YES" : "NO") << '\n';
}