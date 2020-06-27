#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    if(n == 1){
        if(t == 10) cout << -1;
        else cout << t;
    }else{
        for(int i = 1; i <= n; i++){
            if(t == 10){
                if(i == 1) cout << 1;
                else cout << 0;
            }else
                cout << t;
        }
    }
    cout << "\n";
}