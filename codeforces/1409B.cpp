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

ll a, b, x, y, n;
void solve(){  
    cin >> a >> b >> x >> y >> n;
    if(a - min(a - x, n) < b - min(b - y, n)){
        ll temp = min(a - x, n);
        a -= temp;
        n -= temp;

        b -= min(b - y, n);
    }else{
        ll temp = min(b - y, n);
        b -= temp;
        n -= temp;

        a -= min(a - x, n);
    }
    cout << a * b << '\n';
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--) solve();
}