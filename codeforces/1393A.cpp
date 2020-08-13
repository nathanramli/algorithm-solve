#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    ll n, move;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if(n == 1) move = 1;
        else move = (ll)floor(n / 2.0) + 1;
        cout << move << '\n';
    }
    
}