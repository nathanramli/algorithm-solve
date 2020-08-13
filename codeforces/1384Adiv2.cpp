#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x;
    cin >> t;
    string s = string(200, 'a');
    vector<int> a(100);
    while (t--)
    {
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];

        cout << s.substr(0, a[0]) << '\n';
        for(int i=0;i<n - 1;i++) {
            s[max(a[i], a[i + 1]) - 1] = (s[i] == 'a' ? 'b' : 'a');
            cout << s.substr(0, max(a[i], a[i + 1])) << '\n';
        }
        cout << s.substr(0, a[n - 1]) << '\n';
    }
}