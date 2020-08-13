#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    int t, n, k, z, idx;
    cin >> t;
    vector<int> a(1e4);
    while (t--)
    {
        idx = 1;
        cin >> n >> k >> z;
        for(int i=0;i<n;i++) cin >> a[i];
        ll score = a[0] + a[1];

        for(int i=1;i<k;i++){
            if(idx >= 1 && z > 0 && a[idx - 1] > a[idx + 1]){
                score += a[idx - 1];
                if(i < k - 1) score += a[idx];
            }
            score += a[idx];
        }
    }
    
}