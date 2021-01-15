#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 1;
typedef long long ll;

int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    if (s.size() > k)
        cout << s.substr(0, k) << "..." << '\n';
    else    
        cout << s << '\n';
}