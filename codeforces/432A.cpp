#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, people = 0, y;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        if(y + k <= 5) people++;
    }
    cout << floor((double)people/3.0) << "\n";
}