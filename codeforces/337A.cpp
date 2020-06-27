#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, smaller = 1000;
    cin >> n >> m;
    vector<int> f(m);
    for (int i = 0; i < m; i++) cin >> f[i];
    sort(f.begin(), f.end());

    int i = 0, j = n - 1;
    while (j < m)
    {
        smaller = min(smaller, (f[j] - f[i]));
        i++;
        j++;
    }
    cout << smaller << "\n";
}