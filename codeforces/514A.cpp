#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size(), x;
    for (int i = 0; i < len; i++)
    {
        x = s[i] - 48;
        if ((9 - x) < x && !(i == 0 && 9 - x == 0))
        {
            char xConv = '9';
            s[i] = xConv - x;
        }
    }
    cout << s << "\n";
}