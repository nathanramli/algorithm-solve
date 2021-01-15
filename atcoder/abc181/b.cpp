#include <bits/stdc++.h>
typedef long long ll;
int n;
ll ans, a, b;
using namespace std;
int main()
{
    cin >> n;
    ans = 0;
    while (n--)
    {
        cin >> a >> b;
        ans += b * (b + 1) / 2;
        ans -= (a - 1) * a / 2;
    }
    cout << ans << '\n';
}