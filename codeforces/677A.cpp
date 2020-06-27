#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, h, a, hasil = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++){
        cin >> a;
        if(a > h) hasil += 2;
        else hasil += 1;
    }
    cout << hasil << "\n";    
}