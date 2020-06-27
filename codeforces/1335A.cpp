#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t, n, mid;
    cin >> t;
    while (t--)
    {
        cin >> n;
        mid = n / 2;
        if(mid > 0){
            if(mid < ((double)n / (double)2)){
                cout << mid << "\n";
            }else{
                cout << mid - 1 << "\n";
            }
        }else
            cout << 0 << "\n";
    }

}