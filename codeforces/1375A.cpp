#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t,n;
    cin >> t;
    while (t--)
    {
        int cur = 0; 
        cin >> n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++){
            if(i%2==0 && a[i] > 0) a[i] *= -1;
            else if(i%2 && a[i] < 0) a[i] *= -1;
        }
        for(int i=0;i<n;i++) cout << a[i] << (n - 1 == i ? '\n' : ' ');
    }
    
}