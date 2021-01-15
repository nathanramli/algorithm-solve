#include <bits/stdc++.h>
typedef long long ll;
int n;
using namespace std;
int main()
{
    bool ans = false;
    cin >> n;
    if(n % 8 == 0)
        ans = true;
    string s = to_string(n);
    while (next_permutation(s.begin(), s.end()))
    {
        if(atoi(s.c_str()) % 8 == 0){
            ans = true;
            break;
        }
    }
    cout << (ans ? "Yes" : "No") << '\n';
}