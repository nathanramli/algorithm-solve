#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        string s;
        cin >> n >> m;
        for(int i=0;i<n;i++){
            cin >> s;
            if(i == n - 1) {
                for(int j=0;j<m;j++) if(s[j] == 'D') 
                    ans++;
            }
            else if(s[m - 1] == 'R') ans++;
        }
        cout << ans << '\n';
    }
    
}