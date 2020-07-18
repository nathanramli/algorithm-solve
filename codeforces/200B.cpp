#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, p;
    double total = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        total += (double)p / 100;
    }
    total = total / (double)n * 100.0;
    cout << total << '\n';
}