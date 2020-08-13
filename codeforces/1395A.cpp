#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int counteven(ll r,ll g,ll b,ll w){
    int even = 0;
    if(r % 2 == 0) even++;
    if(g % 2 == 0) even++;
    if(b % 2 == 0) even++;
    if(w % 2 == 0) even++;
    return even;
}
int main(){
    int t;
    ll r,g,b,w;
    cin >> t;
    while (t--)
    {
        cin >> r >> g >> b >> w;
        int even = counteven(r, g, b, w);
        if(even >= 3) cout << "Yes\n";
        else{
            for(int i = 1; i <= 3 && r && g && b; i++){
                r--;
                g--;
                b--;
                w+=3;
                even = counteven(r, g, b, w);
                if(even >= 3) break;
            }
            if(even >= 3) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    
}