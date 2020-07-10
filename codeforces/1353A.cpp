#include <iostream>
#define ll long long
using namespace std;
int main(){
    int t;
    ll n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        if(n==1)
            cout << 0 << "\n";
        else if(n == 2) 
            cout << m << "\n";
        else
            cout << m * 2 << "\n";
    }
}