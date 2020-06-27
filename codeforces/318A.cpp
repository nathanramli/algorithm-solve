#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, k, x, pivot;
    cin >> n >> k;
    if( n % 2 == 0 ){
        pivot = n/2;
        if( pivot <  k) x = (k - pivot) * 2;
        else x = k * 2 - 1;
    }else{
        pivot = ceil( (double) n/2);
        if( pivot <  k) x = (k - pivot) * 2;
        else x = k * 2 - 1;
    }
    cout << x << "\n";
}