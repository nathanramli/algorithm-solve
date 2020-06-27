#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n = 0, x, u = 0;
    cin >> t;
    while(t--){
        cin >> x;
        if(n == 0 && x == -1) u++;
        else n += x;
    }
    cout << u << "\n";
}