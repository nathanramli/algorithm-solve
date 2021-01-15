#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int N = 1e8;
ll a[N], mx = 0, sum = 0;
ll n, pos = -1, x, ans;

int main()
{
    cin >> n;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
        if(mx < sum){
            mx = sum;
            pos = i + 1;
        }
    }
    sum = 0;
    if(pos != -1) for(ll i=0;i<n;i++){
        sum += a[i] * (n - (i >= pos ? i + 1 : i));
    }
    ans = max(sum, (ll)0);
    sum = 0;
    if(pos != -1) for(ll i=0;i<pos;i++){
        sum += a[i] * max((pos + 1) - i, (ll)0);
    }
    ans = max(sum, ans);
    cout << ans << '\n';
}