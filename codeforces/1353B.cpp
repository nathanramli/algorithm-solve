#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, k, sum_a;
    cin >> t;
    while (t--)
    {
        sum_a = 0;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum_a += a[i];
        }
        for (int i = 0; i < n; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        
        for(int i = 0; i < k; i++){
            if(a[i] > b[i]) break;
            sum_a += b[i] - a[i];
            a[i] = b[i];
        }
        cout << sum_a << "\n";
    }
    
}