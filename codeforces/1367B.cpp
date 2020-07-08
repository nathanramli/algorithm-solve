#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, x, ng_odd, ng_even;
    cin >> t;
    while (t--)
    {
        ng_odd = ng_even = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if(x % 2 != i % 2) {
                if(x % 2) ng_odd++;
                else ng_even++;
            }
        }
        if(ng_odd != ng_even) cout << -1 << "\n";
        else cout << ng_even << "\n";
    }    
}