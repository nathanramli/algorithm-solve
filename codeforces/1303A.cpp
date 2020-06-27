#include <bits/stdc++.h>

using namespace std;
int main(){
    bool found1;
    int t, len, zero = 0, erased = 0;
    cin >> t;
    string s;
    while (t--){
        zero = 0;
        erased = 0;
        found1 = false;
        cin >> s;
        len = s.size();
        for (int i = 0; i < len; i++){
            if(s[i] == '1' && found1 == false) found1 = true;
            
            if(s[i] == '1' && found1 == true && zero > 0){
                erased += zero;
                zero = 0;
            }else if(s[i] == '0' && found1 == true){
                zero++;
            }
        }
        cout << erased << "\n";
    }
}