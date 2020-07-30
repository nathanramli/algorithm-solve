#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin >> t;
    ll l, r;
    while (t--)
    {
        cin >> l >> r;
        if(l * 2 > r) cout << -1 << ' ' << -1 << '\n';
        else cout << l << ' ' << l * 2 << '\n'; 
    }    
}