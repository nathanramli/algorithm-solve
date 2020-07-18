#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.size(),
        index_substring[2][2] = {-1, -1, -1, -1};

    for (int i = 1; i < len; i++){
        if((s[i - 1] == 'A' && s[i] == 'B') || (s[i - 1] == 'B' && s[i] == 'A')){
            if(s[i - 1] == 'A') {
                if(((index_substring[0][1] == index_substring[1][0] || index_substring[1][1] == index_substring[0][0]) && index_substring[1][1] != i - 1) || index_substring[0][1] == -1){
                    index_substring[0][0] = i - 1;
                    index_substring[0][1] = i;
                }
            }else{
                if(((index_substring[0][1] == index_substring[1][0] || index_substring[1][1] == index_substring[0][0]) && index_substring[0][1] != i - 1) || index_substring[1][1] == -1){
                    index_substring[1][0] = i - 1;
                    index_substring[1][1] = i;
                }
            }
        }
    }
    if(index_substring[0][1] != index_substring[1][0] && index_substring[1][1] != index_substring[0][0] && index_substring[1][0] != -1 && index_substring[0][0] != -1) cout << "YES\n";
    else  cout << "NO\n";
}