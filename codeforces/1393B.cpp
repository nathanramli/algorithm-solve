#include <bits/stdc++.h>
using namespace std;

bool sortByVal(const pair<int, int> &a, const pair<int, int> &b){
        return (a.second > b.second);
    }
int main(){
    int n,x;
    cin >> n;
    map<int, int> sto;
    for(int i=0;i<n;i++) {
        cin >> x;
        if(sto.count(x) > 0)
            sto[x] += 1;
        else
            sto.insert({x, 1});
    }
    sort(sto.begin(), sto.end());
    char symbols;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> symbols >> x;
        if(symbols == '+')
            if(sto.count(x) > 0)
                sto[x]++;
            else
                sto.insert({x, 1});
        else
            sto[x]--;
    }
}