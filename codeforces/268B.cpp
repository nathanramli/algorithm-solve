#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long int curr = 0, x = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if(n - i == 0){
            curr += n;
            break;
        }
        curr += (n - i) + ((n - i) * x);
        x++;
    }
    cout << curr << "\n";
}