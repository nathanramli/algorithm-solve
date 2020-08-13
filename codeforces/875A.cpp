#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int sumofdigit(ll x){
    if(x == 0)
        return 0;
    return x % 10 + sumofdigit(x / 10);
}

int digitlen(ll x){
    if(x == 0)
        return 0;
    return 1 + digitlen(x / 10);
}

int main(){
    ll n;
    cin >> n;

    vector<ll> ans;

    ll start = n - digitlen(n) * 9;
    if(start < 0) start = 1;
    
    ll sum = sumofdigit(start);
    for(ll i = start; i < n; i++){
        if(i % 10 == 0)
            sum = sumofdigit(i);
        else if(i != start)
            sum++;

        if(sum + i == n)
            ans.push_back(i);
    }
    cout << ans.size() << '\n';
    for(int i=0; i<ans.size(); i++){
        cout << ans[i];
        if(i == ans.size() - 1) cout << '\n';
        else cout << ' ';
    }
}