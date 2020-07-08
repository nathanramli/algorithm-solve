#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, minim;
    cin >> t;
    while (t--)
    {
        minim = 0;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s.begin(), s.end());
        for (int i = 1; i < n; i++)
        {
            if(i == 1) minim = abs(s[i] - s[i - 1]); 
            else minim = min(abs(s[i] - s[i - 1]), minim);
        }
        cout << minim << "\n";
    }
    
}