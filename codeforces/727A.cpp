#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int N = 1e9;
stack<ll> rute;
bool found = false;
ll a, b;

void dfs(ll x){
    if(found)
        return;
    if(x == b){
        found = true;
    }else if(x < b){
        rute.push(x * 2);
        dfs(x * 2);
        if(!found){
            rute.pop();
            rute.push(x * 10 + 1);
            dfs(x * 10 + 1);
            if(!found)
                rute.pop();
        }
    }
}

int main(){
    cin >> a >> b;
    dfs(a);
    if(!found)
        cout << "NO\n";
    else{
        cout << "YES\n";
        vector<ll> ans;
        while (!rute.empty())
        {
            ans.push_back(rute.top());
            rute.pop();
        }
        ans.push_back(a);
        cout << ans.size() << '\n';
        for(int i=ans.size()-1; i>=0; i--){
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
}