#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;
int h, w, mx = 1;

const short dir[][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

int visited[N][N];

queue<pair<int, int>> q;

void bfs(){
    while (!q.empty())
    {
        pair<int, int> temp = q.front();
        q.pop();
        for(uint8_t i=0; i<4; i++){
            if(temp.first + dir[i][0] >= 0 && temp.first + dir[i][0] < h && temp.second + dir[i][1] >= 0 && temp.second + dir[i][1] < w){
                if(!visited[temp.first + dir[i][0]][temp.second + dir[i][1]]){
                    q.push(make_pair(temp.first + dir[i][0], temp.second + dir[i][1]));
                    visited[temp.first + dir[i][0]][temp.second + dir[i][1]] = visited[temp.first][temp.second] + 1;
                    mx = max(mx, visited[temp.first + dir[i][0]][temp.second + dir[i][1]]);
                }
            }
        }
    }    
}

int main(){
    cin >> h >> w;
    string s;
    for(int i=0; i<h; i++){
        cin >> s;
        for(int j=0; j<w; j++){
            if(s[j] == '#'){
                visited[i][j] = 1;
                q.push(make_pair(i, j));
            }
        }
    }
    bfs();
    cout << mx - 1 << '\n';
}