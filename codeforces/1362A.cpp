#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t;
    ll a, b;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        cin >> a >> b;
        if(a == b){
            cout << 0 << "\n";
            continue;
        }
        if(a > b){
            if(a % 2 == 0){
                while(a > b && a % 2 == 0) {
                    ++ans;
                    if(a % 8 == 0) a >>= 3;
                    else if(a % 4 == 0) a >>= 2;
                    else a >>= 1;
                }
                if(a == b || a * 4 == b || a * 2 == b) cout << ans << "\n";
                else cout << -1 << "\n";
            }else
                cout << -1 << "\n";
        }else {
            while(a < b) {
                ++ans;
                a <<= 3;
            }
            if(a == b || a / 4 == b || a / 2 == b) cout << ans << "\n";
            else cout << -1 << "\n";            
        }
    }
    
}