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

int main(){
    fast;
    int n, count = 0;
    ll t;
    cin >> n >> t;
    vi b(n);
    fr(i, 0, n) cin >> b[i];
    sort(b.begin(), b.end());
    fr(i, 0, n && t >= b[i])
        t -= b[i], ++count;
    cout << count << '\n';
}