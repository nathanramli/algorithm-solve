#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for(int i=0;i<n-1;i++) cout << i + 1 << ' ';
        cout << n << '\n';
    }
}