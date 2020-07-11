#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    ll x, y, n, k;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n;
        if(n % x == y) {
            cout << n << "\n";
            continue;
        }

        k = n % x;
        if(k < y){
            n -= k + (x - y);
        }else {
            n -= k - y;
        }
        cout << n << "\n";
    }
    
}