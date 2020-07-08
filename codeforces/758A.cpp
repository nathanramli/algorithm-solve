#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, maxim = 0, s = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i == 0) {
            maxim = a[i];
            continue;
        }
        maxim = max(a[i], maxim);
    }
    for (int i = 0; i < n; i++){
        if(a[i] < maxim) s += maxim - a[i];
    }
    cout << s << "\n";
}