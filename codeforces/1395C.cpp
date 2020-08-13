#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m, mx = 0, mn;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];
    int x, ans = 0;
    for(int i=0;i<n;i++) {
        mn = 1 << 9;
        for(int j=0;j<m;j++) {
            mn = min(mn, a[i] & b[j]);
        }
        if(i == 0) ans = mn;
        else ans |= mn;
    }
    cout << ans << '\n';
}