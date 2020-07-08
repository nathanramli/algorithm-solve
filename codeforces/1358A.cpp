#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cout << (long long)ceil((long double)(n * m) / 2) << "\n";
    }    
}