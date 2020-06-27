#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, count = 0;
    cin >> n;
    x = 0;

    while( n >= (x + (count + 1)) ){
        count++;
        x += count;
        n -= x;
    }
    cout << count << "\n";
}