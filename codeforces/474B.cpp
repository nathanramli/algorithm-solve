#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,mx=0,x,low=0,high=0,mid,find;
    cin >> n;
    vector<int> a(1e6);
    for(int i=0; i<n; i++) {
        cin >> x;
        fill(a.begin() + mx, a.begin() + mx + x + 1, i + 1);
        mx += x;
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> x;
        cout << a[x - 1] << '\n';
    }
}