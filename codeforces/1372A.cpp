#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++){
            if(i % 2) cout << 1;
            else cout << 3;
            
            if(i < n) cout << " ";
            else cout << "\n";
        }
    }
}