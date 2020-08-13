#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    ll n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << (ll)((n - 1) / 2) + 1 << '\n'; 
    }
}