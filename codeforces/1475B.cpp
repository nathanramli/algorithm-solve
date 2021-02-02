#include <bits/stdc++.h>
using namespace std;

#define fr(i,a,n) for(int i=a;i<n;i++)
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(0)

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;

const int N = 1e6 + 1;

short dp[N];
bool solve2(int x){
    if(dp[x] != 0)
        return dp[x] == 1;
    if(x == 2021 || x == 2020)
        return (dp[x] = 1) == 1;
    if(x < 2020)
        return (dp[x] = 2) == 1;
    dp[x] = (solve2(x - 2020) || solve2(x - 2021)) ? 1 : 2;
    return dp[x] == 1;
}

void solve(){
    int n;
    cin >> n;
    cout << (solve2(n) ? "YES" : "NO") << '\n';
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--) solve();
}