#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, solved = 0, spent_time = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if(i * 5 + k + spent_time <= 240) {
            solved++;
            spent_time += i * 5;
        }
    }
    cout << solved << '\n';
}