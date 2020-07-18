#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        vector<int> used(n + 1, 0);
        for (int i = 0; i < (n * 2); i++)
        {
            cin >> x;
            if(used[x] != 1) {
                cout << x;
                used[x] = 1;
                if(i == n * 2 - 1) cout << '\n';
                else cout << ' ';
            }

        }        
    }
    
}