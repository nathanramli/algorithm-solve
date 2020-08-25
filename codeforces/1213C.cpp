#include <bits/stdc++.h>
using namespace std;

#define fr(i,a,n) for(int i=a;i<n;i++)
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(0)

typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vector<int>> vii;

int main(){
    int t;
    ll n,m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if(n < m) cout << 0 << '\n';
        else{
            vl seq(11);
            seq[0] = 0;

            for(int i = 1; i <= (n / m > 10 ? 10 : (ll)(n / m)); i++)
                seq[i] = seq[i - 1] + (m * i) % 10;

            if(n / m > 10) {
                cout << (seq[10] * (ll)(n / m / 10)) + (seq[(n / m) % 10]) << '\n';
            }else{
                cout << seq[floor(n / m)] << '\n';
            }
        }
    }
}