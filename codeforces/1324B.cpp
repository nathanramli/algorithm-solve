#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, x, last;
    cin >> t;
    while (t--)
    {
        bool palindrome = false;
        cin >> n;
        vector<int> a(n + 1, 0);
        for (int i = 0; i < n; i++){
            cin >> x;
            
            if(++a[x] >= 3) {
                palindrome = true;
            }
            if(a[x] == 2 && last != x) palindrome = true;
            last = x;
        }
        cout << (palindrome ? "YES" : "NO") << "\n";
    }
    
}