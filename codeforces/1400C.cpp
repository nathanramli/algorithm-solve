#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,x,len,not_valid = 0;
    string s, ans;
    cin >> t;
    while (t--)
    {
        not_valid = 1;
        cin >> s;
        len = s.size();
        ans = string(len, '1');
        cin >> x;
        for(int i=0;i<len;i++){
            if(s[i]=='0'){
                if(i + x < len)
                    ans[i + x] = '0';
                if(i - x >= 0)
                    ans[i - x] = '0';
            }
        }
        for(int i=0;i<len;i++){
            if(s[i]=='1'){
                if((i + x >= len || (i + x < len && ans[i + x] == '0')) && ((i - x >= 0 && ans[i - x] == '0') || i - x < 0)){
                    not_valid = 0;
                    break;
                }
            }
        }
        cout << (not_valid ? ans : "-1") << '\n';
    }
    
}