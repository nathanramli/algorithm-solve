#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << (k > n ? abs(n - k) : (n - k) % 2) << '\n';
    }
}