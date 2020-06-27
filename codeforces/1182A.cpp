#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long x;
    cin >> n;
    x = pow(2, (long long)n/2);
    cout << (n % 2 ? 0 : x) << "\n";
}