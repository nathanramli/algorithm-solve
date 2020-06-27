#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b, c, ab;
    cin >> a >> b;
    ab = a + b;
    cin >> c;

    if(ab.size() != c.size()) cout << "NO\n";
    else {
        bool isYes = true;
        sort(ab.begin(), ab.end());
        sort(c.begin(), c.end());
        for (int i = 0; i < c.size(); i++){
            if(ab[i] != c[i]) {
                isYes = false;
                break;
            }
        }
        if(isYes)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}