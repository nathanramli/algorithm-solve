#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, maximum = -1;
    cin >> a >> b >> c;
    maximum = max(maximum, a + b * c);    
    maximum = max(maximum, a * (b + c));    
    maximum = max(maximum, a * b * c);    
    maximum = max(maximum, (a + b) * c);
    maximum = max(maximum, a + b + c);
    maximum = max(maximum, a * b + c);
    cout << maximum << "\n";
}