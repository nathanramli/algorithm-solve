#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll a, b;
stack<ll> rute;
bool found = false;

map<ll, char> nodes; 

void dfs(ll k){
    if(!rute.empty() && found == false){
        nodes.insert({k * 2, 0});
        nodes.insert({k * 10 + 1, 0});
    }
}

int main(){
    cin >> a >> b;
    rute.push(a);
    dfs(a);
}