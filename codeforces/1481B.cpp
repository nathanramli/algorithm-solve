#include <bits/stdc++.h>
using namespace std;

#define fr(i,a,n) for(int i=a;i<n;i++)
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(0)

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;

const int N = 1e2;
int h[N + 1];

void solve(){
    int n, k;
    cin >> n >> k;
    fr(i, 0, n)
        cin >> h[i];
    int ans = -1;
    for(int i=0; i<n-1;){
        if(h[i] < h[i + 1])
        {
            h[i]++;
            if(--k == 0){
                ans = i + 1;
                break;
            }
            if(i > 0)
                i--;
        }else
            i++;
    }
    cout << ans << '\n';
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--) solve();
}