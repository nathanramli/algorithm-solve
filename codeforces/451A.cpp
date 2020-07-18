#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, win = 0;
    cin >> n >> m;
    win = min(n, m);
    cout << ((win % 2) ? "Akshat" : "Malvika") << "\n"; 
}