#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll c1(int x[2], int y[2], int z[2]){
    int temp;
    // distract all zero
    temp = min(x[0], z[1]);
    x[0] -= temp;
    z[1] -= temp;

    temp = min(z[0], z[1]);
    z[0] -= temp;
    z[1] -= temp;

    temp = min(y[0], x[1]);
    x[1] -= temp;
    y[0] -= temp;

    temp = min(y[0], y[1]);
    y[0] -= temp;
    y[1] -= temp;

    temp = min(x[0], y[1]);
    x[0] -= temp;
    y[1] -= temp;

    temp = min(z[0], x[1]);
    z[0] -= temp;
    x[1] -= temp;

    // remove same elements
    temp = min(x[0], x[1]);
    x[0] -= temp;
    x[1] -= temp;

    temp = min(z[1], y[0]);
    z[1] -= temp;
    y[0] -= temp;
    return temp * -2;
}

ll c2(int x[2], int y[2], int z[2]){
    int temp;
    // remove same elements
    temp = min(x[0], x[1]);
    x[0] -= temp;
    x[1] -= temp;

    temp = min(y[0], y[1]);
    y[0] -= temp;
    y[1] -= temp;

    temp = min(z[0], z[1]);
    z[0] -= temp;
    z[1] -= temp;

    // distract all zero
    temp = min(x[0], z[1]);
    x[0] -= temp;
    z[1] -= temp;

    temp = min(x[0], y[1]);
    x[0] -= temp;
    y[1] -= temp;

    temp = min(y[0], x[1]);
    x[1] -= temp;
    y[0] -= temp;

    temp = min(z[0], x[1]);
    z[0] -= temp;
    x[1] -= temp;

    temp = min(z[1], y[0]);
    z[1] -= temp;
    y[0] -= temp;
    return temp * -2;
}

int main(){
    int t, x[2], y[2], z[2], temp;
    cin >> t;
    while (t--)
    {
        ll sum = 0;
        cin >> x[0] >> y[0] >> z[0];
        cin >> x[1] >> y[1] >> z[1];
        // multiply by 2
        sum += min(z[0], y[1]) * 2;
        temp = min(z[0], y[1]);
        z[0] -= temp;
        y[1] -= temp;

        cout << sum + max(c1(x, y, z), c2(x, y, z)) << '\n';
    }
}