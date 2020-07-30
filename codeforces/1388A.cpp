#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    int almost[] = {
        6,
        10,
        14,
        15
    };
    const int left = 6 + 14 + 10;
    while (t--)
    {
        cin >> n;
        if(left + 1 > n) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        if(n - left == 6 || n - left == 14 || n - left == 10)
            cout << 15 << ' ' << 6 << ' ' << 10 << ' ' << n - 10 - 6 - 15 << '\n';
        else
            cout << 14 << ' ' << 6 << ' ' << 10 << ' ' << n - 10 - 6 - 14 << '\n';
    }
}