#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        vector<ll> x(3);
        cin >> x[0] >> x[1] >> x[2];

        sort(x.begin(), x.end());
        if(x[0] == x[1] && x[1] == x[2]) {
            cout << "YES\n";
            cout << x[0] <<  " " << x[1] << " " << x[2] << '\n';
            continue;
        }
        if(x[0] == x[1] && x[2] > x[1]) {
            cout << "NO\n";
            continue;
        }
        if(x[0] < x[1] && x[1] < x[2]){
            cout << "NO\n";
            continue;
        }
        if(x[2] == x[1] && x[2] > x[0]) {
            cout << "YES\n";
            cout << x[0] <<  " " << x[0] << " " << x[2] << '\n';
            continue;
        }
    }
}