#include <bits/stdc++.h>
using namespace std;
int main(){
    bool execute = false;
    string p;
    cin >> p;
    for (int i = 0; i < p.size(); i++){
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9') execute = true;
    }
    if(execute) cout << "YES\n";
    else cout << "NO\n";    
}