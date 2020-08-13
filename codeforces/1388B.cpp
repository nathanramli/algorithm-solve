#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int zero = n / 4 + (n % 4 ? 1 : 0);
        cout << string(n - zero, '9') << string(zero, '8') << '\n';
    }
}