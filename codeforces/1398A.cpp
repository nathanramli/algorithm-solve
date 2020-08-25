#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main(){
    int t, n;
    cin >> t;
    vector<ll> a(5 * 1e4);
    while (t--)
    {
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        if(a[0] + a[1] > a[n - 1]) cout << "-1\n";
        else cout << 1 << ' ' << 2 << ' ' << n << '\n';
    }
    
}