#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, x, n, m;
    cin >> t;
    while (t--)
    {
        cin >> x >> n >> m;
        while (x > 20 && n-- > 0) x = (int)(x/2.0) + 10;
        if(m * 10 >= x) cout << "YES\n";
        else cout << "NO\n";
    }
}