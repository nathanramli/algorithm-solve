#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t,n,win; // 0 - first player
    cin >> t;
    while (t--)
    {
        win = 0;
        cin >> n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        for(int i=0;i<n-1;i++){
            if(a[i]==1) {
                win = (win+1)%2;
                continue;
            }
            if(a[i] != 1 && a[i+1] == 1) {
                int banyak_satu = 0;
                for(int j=i+1;j<n;j++){
                    if(a[j]==1) banyak_satu++;
                    else break;
                }

                if(banyak_satu + i == n - 1) break;
                if(banyak_satu % 2)
                    win=(win+1)%2;
            }
        }

        if(win) cout << "Second\n";
        else cout << "First\n";
    }
}