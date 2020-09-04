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


ll n, ntemp, inc = 1, cnt;
int s, sum, x;

void cntsum(ll nte){
    sum = 0;
    while(nte > 0){
        sum += nte % 10;
        nte /= 10;
    }
}

void solve(){
    cin >> n;
    cin >> s;
    ntemp = n;
    cntsum(ntemp);
    if(sum <= s)
        cout << 0 << '\n';
    else{
        cnt = 0;
        inc = 1;
        ntemp = n;
        while (s < sum)
        {
            x = ntemp % 10;
            ntemp /= 10;
            if(x > 0){
                cnt += (10 - x) * inc;
                if(ntemp > 0){
                    ntemp++;
                }
                cntsum(ntemp);
            }
            inc *= 10;
        }        
        cout << cnt << '\n';
    }
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--) solve();
}