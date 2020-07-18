#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t, n, mid;
    cin >> t;
    while (t--){
        cin >> n;
        if((n/2) % 2) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        mid = n / 2;
        ll even = 2, odd = 1, sum_even = 0, sum_odd = 0;
        for (int i = 0; i < mid; i++, even += 2, sum_even += even)
            cout << even << ' ';
        for (int i = 0; i < mid - 1; i++, odd += 2, sum_odd += odd)
            cout << odd << ' ';
        cout << (sum_even - even) - sum_odd + odd + 1;
        cout << '\n';
    }
    
}