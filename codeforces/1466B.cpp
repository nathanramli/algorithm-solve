#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0)
const int N = 2e5 + 1;
typedef long long ll;

void solve(){
    int n, x, ans=0;
    cin >> n;
    bool a[N];
    memset(a, false, N);
    for(int i=0; i<n; i++){
        cin >> x;
        if(a[x-1]==false){
            a[x-1] = true;
            ans++;
        }
        else if(a[x]==false){
            a[x] = true;
            ans++;
        }
    }
    cout << ans << '\n';
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}