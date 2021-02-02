#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0)
const int N = 1e5;
typedef long long ll;

bool visited[51];
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    memset(visited, false, 51);
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] != arr[j] && visited[abs(arr[i] - arr[j])] == false)
                ans++, visited[abs(arr[i] - arr[j])] = true;
        }
    }
    cout << ans << '\n';
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}