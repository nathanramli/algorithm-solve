#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll combinatorics(ll n, ll r)
{
    ll p = 1, k = 1;
    if (n - r < r)
        r = n - r;
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            ll m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p = 1;
    return p;
}

int main(){
    ll l;
    cin >> l;
    cout << combinatorics(l-1, 11) << '\n';
}