#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fpb(ll x, ll y){
    if(x == 0) return y;
    return fpb(y % x, x);
}

ll kpk(ll x, ll y) {
    return (x*y)/fpb(x,y);
}


int main(){
    int t;
    ll n, minim, terkecil[2];
    cin >> t;
    while (t--)
    {
        cin >> n;
        if(n % 2 == 0) {
            cout << n / 2 << " " << n / 2 << "\n";
            continue;
        }

        minim = n;
        for (ll i = ceil(n * 0.3333); i >= 1; i-=2)
        {
            ll kpk_hitung = kpk(i, n - i);
            if(kpk_hitung < minim) {
                terkecil[1] = i;
                terkecil[0] = n - i;
                minim = kpk_hitung;
            }
        }
        cout << terkecil[0] << " " << terkecil[1] << "\n";
    }
    
}