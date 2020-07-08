#include <bits/stdc++.h>

using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int hipster = min(a, b);
    a -= hipster;
    b -= hipster;
    cout << hipster << " " << (int)(a / 2) + (int)(b / 2) << "\n";
}