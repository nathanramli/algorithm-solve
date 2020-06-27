#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, a, b, c, d, x, y,x1, y1, x2, y2;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        if((x1 == x2 && (a > 0 || b > 0)) || (y1 == y2 && (c > 0 || d > 0))){
            cout << "No\n";
            continue;
        }
        x -= a;

        x += b;
        y -= c;
        y += d;

        if(x >= x1 && x <= x2 && y >= y1 && y <= y2)
            cout << "Yes";
        else
            cout << "No";
        cout << "\n";
    }
    
}