#include <bits/stdc++.h>
using  namespace std;
int main(){
    int n, m, x = 0, y, maxX = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> y;
        if(ceil((double)y / (double)m) >= maxX){
            x = i + 1;
            maxX = ceil((double)y / (double)m);
        }
    }
    cout << x << "\n";
}