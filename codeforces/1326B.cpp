#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    ll largest, x; 
    cin >> n;
    cin >> largest;

    cout << (largest > 0 ? largest : 0) << ' ';
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        cout << (x + largest);
        largest = max(x + largest, largest);
        if(i == n - 1) cout << '\n';
        else cout << ' ';
    }
    
}