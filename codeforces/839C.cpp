#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int n, x, y, len;
double ans, cnt;
bool vis[N + 1];

vector<vector<int>> adj;

double dfs(int a)
{
	vis[a] = true;

    double sum = 0;
    int child = 0;
	for(int i = 0; i < adj[a].size(); i++)
	{
		int temp = adj[a][i];
		if(!vis[temp]){
            child++;
			sum += dfs(temp);
        }
	}
    if(!child)
        return 0.0;
    return (sum / (double)child) + 1.0;
}

int main(){
    cin >> n;
    adj.resize(n + 1);
    for(int i=0; i<n-1; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    printf("%lf\n", dfs(1));
}