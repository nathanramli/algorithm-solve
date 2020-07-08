#include <bits/stdc++.h>

#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    ll x, y, a, b, used, minimum;
    while (t--)
    {
        used = 0;
        cin >> x >> y;
        cin >> a >> b;
        minimum = min(x, y);
        x -= minimum;
        y -= minimum;
        if(a * 2 < b) {
            used += minimum * (a * 2);
        }else{
            used += minimum * b;
        }
        used += + ((x > 0) ? x * a : y * a);
        cout << used << "\n";
    }
}