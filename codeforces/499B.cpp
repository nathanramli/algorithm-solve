#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, string> kamus;

    int n, m;
    string a, b, x;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        if(a.size() > b.size()) x = b;
        else x = a;
        kamus.insert({a, x});
        kamus.insert({b, x});
    }
    while (n--)
    {
        cin >> x;
        cout << kamus[x];
        if(n == 0) cout << "\n";
        else cout << " ";
    }
       
}