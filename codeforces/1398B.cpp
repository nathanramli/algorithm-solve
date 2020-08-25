#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, len, seq;
    string s;
    cin >> t;
    while (t--)
    {
        seq = 0;
        vector<int> res;
        cin >> s;
        len = s.size();
        for(int i=0;i<len;i++){
            if(s[i] == '1') {
                seq++;
                if(i == len - 1) {
                    res.push_back(seq);
                    seq = 0;
                }
            }
            else if(seq != 0){
                res.push_back(seq);
                seq = 0;
            }
        }
        sort(res.begin(), res.end());
        int alice = 0;
        for(int i=res.size()-1; i>=0; i-=2){
            alice += res[i];
        }
        cout << alice << '\n';
    }
    
}