#include <bits/stdc++.h>
using namespace std;
vector<int> nodes[200000];
int f[200000];
int visited[200000];
int cat[200000];
int n, m, ans = 0;

void dfs(int k){
    if(!visited[k])
    {
        visited[k] = 1;
        if(cat[k] == 1) f[k]++;
        else f[k] = 0;

        for(int i=0;i<nodes[k].size();i++) 
            f[nodes[k][i]] = f[k];
        
        if(f[k] <= m){
            if(nodes[k].size() == 1 && k != 0)
                ans++;
            for(int i=0;i<nodes[k].size();i++){

                dfs(nodes[k][i]);
            }            
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> cat[i];

    int x,y;
    for(int i=0;i<n-1;i++){
        cin >> x >> y;
        nodes[x-1].push_back(y-1);
        nodes[y-1].push_back(x-1);
    }
    dfs(0);
    cout << ans << '\n';
}