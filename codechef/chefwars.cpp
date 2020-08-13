#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,p,h;
    cin >> t;
    while (t--)
    {
        cin >> h >> p;
        while(p > 0 && h > 0) {
            h-=p;
            p=floor(p/2);
        }
        cout << (h <= 0) << '\n';
    }
    
}