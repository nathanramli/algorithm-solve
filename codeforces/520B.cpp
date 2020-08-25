#include <bits/stdc++.h>
using namespace std;

#define fr(i,a,n) for(int i=a;i<n;i++)
#define pb push_back

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;

int n, m;

bool found = false;
int step = 0;

void bfs(int x){
    if(x > 0 && found == false){
        if(x == m){
            found = true;
        }else if(x * 2 == m || x - 1 == m){
            step++;
            found = true;
        }else{
            bfs(x * 2);
            bfs(x - 1);
        }
    }
}

int main(){
    cin >> n >> m;
    if(found) cout << "found" << '\n';
    // bfs(n);
}