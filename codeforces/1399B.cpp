#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t, n;
    cin >> t;
    while (t--)
    {
        ll mn_a = 1e9 + 1, mn_b = 1e9 + 1, move = 0;
        cin >> n;
        vector<ll> a(n), b(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
            mn_a = min(mn_a, a[i]);
        }
        for(int i=0;i<n;i++) {
            cin >> b[i];
            mn_b = min(mn_b, b[i]);
        }

        for(int i=0;i<n;i++) {
            ll cur_move_a = 0, cur_move_b = 0;
            if(a[i] - mn_a > 0) cur_move_a = a[i] - mn_a;
            if(b[i] - mn_b > 0) cur_move_b = b[i] - mn_b;
            move += cur_move_a + cur_move_b - min(cur_move_a, cur_move_b);
        }
        cout << move << '\n';
    }
    
}