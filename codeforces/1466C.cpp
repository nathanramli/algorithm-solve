#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(0)
const int N = 1e5;
typedef long long ll;

void solve(){
    int ans =0;
    string s;
    cin >> s;
    int len = s.size();
    for(int i=0; i<len-1; i++){
        if(i < len - 2 && s[i] == s[i+1] && s[i] == s[i+2]){
            s[i+2] = '*';
            ans+=2;
            i+=2;
        }else if(i < len - 1 && s[i] == s[i + 1]){
            s[i+1] = '*';
            ans++;
            i+=1;
        }else if(i < len - 3 && s[i] == s[i + 2] && s[i+1] == s[i+3]){
            s[i+3] = '*';
            ans+=2;
            i+=3;
        }else if(i < len - 2 && s[i] == s[i + 2]){
            s[i+2] = '*';
            ans++;
            i+=2;
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