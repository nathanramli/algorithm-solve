#include <bits/stdc++.h>
using namespace std;

#define fr(i,a,n) for(int i=a;i<n;i++)
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(0)

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;

const int N = 1e5;

ll a,b;
void solve(){
    cin >> a >> b;
    if(a == b)
        cout << 0 << '\n';
    else
        cout << (ll)ceil(abs(b - a) / (double)10) << '\n';
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--) solve();
}