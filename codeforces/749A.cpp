#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, mid;
    cin >> n;
    mid = n / 2;
    cout << mid << '\n';    
    for (int i = 0; i < mid; i++)
    {
        if(i == mid - 1){
            if(n % 2) cout << 3 << '\n';
            else cout << 2 << '\n';
        }else
            cout << 2 << ' ';
    }
}