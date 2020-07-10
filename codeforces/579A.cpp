// Compiled using clang++
#include <iostream>
#define ll long long
using namespace std;
int main(){
    int ans = 0;
    ll x;
    cin >> x;
    while(x > 0){
        ans += x % 2;
        x = x/2;
    }
    cout << ans << "\n";
}