#include <bits/stdc++.h>
using namespace std;

#define fr(i,a,n) for(int i=a;i<n;i++)
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(0)

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
string s;
int r, l, d, u;
const int N = 1e5;

void solve(){
    int x, y;
    cin >> x >> y;
    cin >> s;
    r=l=d=u=0;
    for(char i : s){
        if(i == 'R')
            r++;
        else if(i == 'U')
            u++;
        else if(i == 'D')
            d++;
        else if(i == 'L')
            l++;
    }
    bool yes = true;
    yes &= ((x >= 0 && r >= x) || (x <= 0 && l >= x * -1));
    yes &= ((y >= 0 && u >= y) || (y <= 0 && d >= y * -1));
    cout << (yes ? "YES" : "NO") << '\n';
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--) solve();
}