#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, len;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a;
        len = a.size();
        b = a[0];
        for (int i = 1; i < len - 1; i+=2)
        {
            b += a[i];
        }
        b += a[len - 1];
        cout << b << "\n";
    }
}