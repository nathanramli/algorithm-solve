#include <iostream>
using namespace std;
int main(){
    int n=4,x,mn = 101;
    while (n--){
        cin >> x;
        mn = min(mn, x);
    }
    cout << mn << '\n';
}