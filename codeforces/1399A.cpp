#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while (t--)
    {
        int more = 0;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        if(a.size() == 1) {
            cout << "YES\n";
        }else{
            for(int i=1; i<n; i++) 
                if(abs(a[i] - a[i - 1]) > 1) more++;

            if(more > 0) cout << "NO\n";
            else cout << "YES\n";
        }

    }
    
}