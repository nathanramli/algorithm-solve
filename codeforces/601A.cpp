#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 400 + 1;
bool reserved[N][N];
int n, m;
queue<int> q;
int visited[N];
int ans = -1;
void bfs(int a, vector<int> * adj){
    visited[a] = 1;
    q.push(a);
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        for(int i=0; i<adj[temp].size(); i++){
            if(!visited[adj[temp][i]]){
                visited[adj[temp][i]] = visited[temp] + 1;
                q.push(adj[temp][i]);
                if(adj[temp][i] == n){
                    ans = visited[temp];
                    break;
                }
            }
        }
    }
}
vector<int> adj[N];
vector<int> adjBus[N];

int main(){
    int x, y;
    bool immediate = false;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        reserved[x][y] = reserved[y][x] = true;
        if((x == n && y == 1) || (y == n && x == 1))
            immediate = true;
    }
    if(immediate){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(reserved[i][j] == false){
                    adjBus[i].push_back(j);
                    adjBus[j].push_back(i);
                }
            }
        }
        bfs(1, adjBus);
        cout << ans << '\n';
    }else{
        bfs(1, adj);
        cout << ans << '\n';
    }
}