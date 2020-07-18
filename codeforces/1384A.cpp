#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while (t--)
    {
        ll x1 = 0, x2 = 0;
        cin >> n;
        x1 = 1 << n;
        for (int i = 1; i < n; i++){
            if(i < n / 2) x1 += 1 << i;
            else x2 += 1 << i;
        }        
        cout << abs(x1 - x2) << "\n";
    }
}