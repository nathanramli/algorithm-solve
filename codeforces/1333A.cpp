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
    int t,n,m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int w = n * m / 2 - ((n * m % 2 == 0) ? 1 : 0);
        fr(i, 0, n){
            fr(j, 0, m){
                if(w > 0){
                    if((i % 2 && j % 2 == 0) || (i % 2 == 0 && j % 2)) {
                        cout << 'W';
                        w--;
                    }
                    else cout << 'B';
                }else{
                    cout << 'B';
                }
            }
            cout << '\n';
        }
    }
    
}