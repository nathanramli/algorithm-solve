#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y){
    if(y == 0) return x;
    if(x == 1 || y == 1) return 1;
    int n = min(x, y);
    do
    {
        if(x % n == 0 && y % n == 0) return n;
    }while (--n);
    return 1;
}

int main(){
    int a,b,n,x, turn = 0;
    cin >> a >> b >> n;
    while (n > 0)
    {
        if(turn == 0) x = gcd(a, n);
        else x = gcd(b, n);
        n -= x;

        turn++;
        turn %= 2;
    }
    turn++;
    turn %= 2;
    cout << turn << "\n";
}