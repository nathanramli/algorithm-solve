#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, x, y, v, h;
    bool down=true;
    cin >> n >> m >> x >> y;
    v = x;
    h = y;
    for(int i=0;i<n*m;i++){
        if(down)
            cout << v++ << ' ' << h << '\n';
        else
            cout << v-- << ' ' << h << '\n';
        // masih bermasalah jika m ganjil
        if(v == n + 1 && down){
            h = h % m + 1;
            down = false;
            v = n;
        }else if(v == 0 && !down){
            h = h % m + 1;
            down = true;
            v = 1;
        }
    }
}