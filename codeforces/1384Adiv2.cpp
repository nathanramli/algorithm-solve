#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x;
    cin >> t;
    string s = string(51, 'a');
    vector<int> a(100);
    while (t--)
    {
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];
        cout << s << '\n';
        for(int i=0;i<n;i++){
            s[a[i]] = (s[a[i]] == 'a' ? 'b' : 'a');
            cout << s << '\n';
        }
    }
}