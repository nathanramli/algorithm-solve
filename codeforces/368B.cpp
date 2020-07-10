#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, x, distinct = 0;
    cin >> n >> m;

    vector<int> a(100000);
    vector<int> arr(n);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = n - 1; i >= 0; i--){
        if(a[arr[i] - 1] != 1) ans[i] = ++distinct;
        else ans[i] = distinct;
        a[arr[i] - 1] = 1;
    }

    while (m--)
    {
        cin >> x;
        cout << ans[x - 1] << "\n";
    }    
}