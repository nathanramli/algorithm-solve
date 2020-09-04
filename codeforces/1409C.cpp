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

int n;
ll x,y;
void solve(){
    cin >> n >> x >> y;
    if(n == 2){
        cout << x << ' ' << y << '\n';
    }else{
        int cnt = 1;
        for(int i=1;i<=y-x;i++){
            if(i * n > y - x && (y - x) % i == 0){
                cnt = i;
                break;
            }
        }
        ll l = x, r = y;
        for(int i=x;i<=y;i+=cnt){
            cout << i << ' ';
            n--;
        }
        for(int i=0;i<n;i++){
            if(l - cnt > 0){
                l -= cnt;
                cout << l << ' ';
            }else{
                r += cnt;
                cout << r << ' ';
            }
        }
        cout << '\n';
    }
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--) solve();
}