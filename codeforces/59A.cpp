#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, lower = "", upper = "";
    cin >> s;
    int len = s.size(), up = 0, low = 0, ascii;

    for (int i = 0; i < len; i++)
    {
        ascii = (int)s[i];
        if(ascii >= 65 && ascii <= 90){
            up++;
            lower += (s[i] + 32);
            upper += (s[i]);
        }
        else{
            low++;
            lower += (s[i]);
            upper += (s[i] - 32);
        }
    }

    if(low >= up) cout << lower << "\n";
    else cout << upper << "\n";
    
}