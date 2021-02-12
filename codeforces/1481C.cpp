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
int n, m, x;
vector<int> unsolved[N];
int a[N], b[N];
int ans[N];
int has[N];
void solve(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
        has[i] = -1;
        unsolved[i].clear();
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        cin >> b[i];
        if(a[i] != b[i]){
            unsolved[b[i] - 1].pb(i);
            cnt++;
        }
        has[b[i] - 1] = i;
    }
    vector<int> solvedme;
    bool yes = true;
    for(int i=0; i<m; i++){
        cin >> x;
        if(!unsolved[x - 1].empty()){
            ans[i] = unsolved[x - 1].back();
            if(!solvedme.empty()){
                for(int e : solvedme){
                    ans[e] = ans[i];
                }
                solvedme.clear();
            }
            unsolved[x - 1].pop_back();
            cnt--;
        }else{
            if(has[x - 1] != -1){
                ans[i] = has[x - 1];
                if(!solvedme.empty()){
                    for(int e : solvedme){
                        ans[e] = ans[i];
                    }
                    solvedme.clear();
                }
            }
            else {
                solvedme.pb(i);
            }
        }
    }
    yes &= solvedme.empty();
    yes &= cnt == 0; 
    cout << (yes ? "YES" : "NO") << '\n';
    if(yes){
        for(int i=0; i<m; i++)
            cout << ans[i] + 1 << ' ';
        cout << '\n';
    }
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--) solve();
}