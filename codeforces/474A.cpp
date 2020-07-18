#include <bits/stdc++.h>
using namespace std;
int main(){
    const string keyboard[3] = {
        "qwertyuiop",
        "asdfghjkl;",
        "zxcvbnm,./"
    };
    char LoR;
    string s;
    cin >> LoR;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        bool done = 0;
        for (int j = 0; j < 3 && done == 0; j++){
            for (int k = 0; k < keyboard[j].size(); k++)
            {
                if(keyboard[j][k] == s[i]){
                    if(LoR == 'R') cout << keyboard[j][k - 1];
                    else cout << keyboard[j][k + 1];
                    done = 1;
                    break;
                }
            }
        }
    }
    cout << "\n";
}