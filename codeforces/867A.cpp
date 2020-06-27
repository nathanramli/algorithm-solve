#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n, francisco = 0, seattle = 0;
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.size() - 1; i++){
        if(s[i] == 'F' && s[i + 1] == 'S') francisco++;
        else if(s[i] == 'S' && s[i + 1] == 'F') seattle++;
    }
    cout << (seattle > francisco ? "YES" : "NO") << "\n";
}