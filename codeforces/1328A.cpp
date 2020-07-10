/*
    COMPILED using clang++
*/
#include <iostream>

#define ll long long

using namespace std;
int main(){
    int t;
    ll a, b, m;
    cin >> t;
    while(t--){
        cin >> a >> b;
        m = a % b;
        cout << (m ? b - m : 0) << "\n";
    }
}