#include <bits/stdc++.h>

using namespace std;

int main(){ 
    long long hasil = 0, n;
    cin >> n;
    hasil = ceil((double)n / 2.0);
    if(n % 2 == 1) hasil *= -1; 
    cout << hasil << "\n";
}