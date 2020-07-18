#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while (t--)
    {
        int ans[3];
        ans[0] = ans[1] = ans[2] = -1;
        cin >> n;
        vector<int> p(n);

        for (int i = 0; i < n; i++){
            cin >> p[i];
        }
        for (int i = 1; i < n - 1; i++)
        {
            if(p[i] > p[i - 1] && p[i] > p[i + 1]) {
                ans[0] = i; 
                ans[1] = i + 1;
                ans[2] = i + 2;
            }
        }
        
        if(ans[2] != -1) {
            cout << "YES\n";
            cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << '\n';
        }else
            cout << "NO\n";
    }    
}