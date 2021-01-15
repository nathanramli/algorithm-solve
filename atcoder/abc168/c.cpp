#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
typedef long long ll;

vector<int> adj[N];
bool visited[N];
int ans[N];
int n, m, x, y;

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        for(int i=0; i<adj[temp].size(); i++){
            if(!visited[adj[temp][i]]){
                visited[adj[temp][i]] = true;
                q.push(adj[temp][i]);
                ans[adj[temp][i]] = ans[temp] + 1;
            }
        }
    }
}

void solve()
{
    for(int i=0; i<N; i++)
        adj[i].clear();

    memset(ans, 0, sizeof(int) * N);
    memset(visited, false, sizeof(bool) * N);

    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bfs(1);
    bool yes = true;
    for(int i=2; i<=n; i++){
        if(ans[i] == 0){
            yes = false;
            break;
        }
    }
    if(yes){
        cout << "Yes\n";
        for(int i=2; i<=n; i++){
            cout << ans[i] << '\n';
        }
    }else
        cout << "No\n";
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
}