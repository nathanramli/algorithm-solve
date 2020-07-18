#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, minim, maxim, x, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if(i == 0) {
            minim = maxim = x;
            continue;
        }

        if(minim > x && ++ans)
            minim = x;
        if(maxim < x && ++ans)
            maxim = x;
    }    
    cout << ans << '\n';
}