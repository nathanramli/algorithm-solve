#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    string s;
    while (t--)
    {

        int subseq = 0;
        stack<int> st[2];
        cin >> n;
        cin >> s;
        vector<int> ans(n), seq;
        seq.push_back(1);
        st[(int)s[0] - 48].push(0);
        ans[0] = 0;

        for(int i=1;i<n;i++){
            int ascii = (int)s[i] - 48;
            if(st[!ascii].size() == 0) {
                ans[i] = seq.size();
                seq.push_back(1);
                st[ascii].push(ans[i]);
            }else{
                ans[i] = st[!ascii].top();
                st[ascii].push(ans[i]);
                st[!ascii].pop();
            }
        }
        
        cout << seq.size() << '\n';
        for(int i=0;i<n;i++){
            cout << ans[i] + 1;
            if(i == n - 1) cout << '\n';
            else cout << ' ';
        }
    }
    
}