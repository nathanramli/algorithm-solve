#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, not_disappoint = 0;
    cin >> n;
    ll sum = 0;
    vector<ll> t(n);
    for (int i = 0; i < n; i++){
        cin >> t[i];
    }
    sort(t.begin(), t.end());
    for (int i = 0; i < n; i++){
        if(t[i] >= sum) not_disappoint++;
        else continue;
        sum += t[i];
    }
    cout << not_disappoint << "\n";
}