#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, m, x;
    cin >> t;
    while (t--)
    {
        int yes = 0;
        cin >> n >> m;
        vector<int> a(1000);
        for(int i=0;i<n;i++) {
            cin >> x;
            a[x-1] = 1;
        }
        for(int i=0;i<m;i++) {
            cin >> x;
            if(a[x-1]==1) yes = x;
        };
        if(yes!=0) cout << "YES\n1 " << yes << '\n';
        else cout << "NO\n";
    }
}