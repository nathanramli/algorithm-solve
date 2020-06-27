#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int i = 0;
    while (i < s.size() - 1 && s.size() > 1)
    {
        if(s[i] != s[ i + 1 ]){
            s.erase(s.begin() + i);
            s.erase(s.begin() + i);
            if(i >= 1) i -= 1;
        }else{
            i++;
        }
    }

    cout << s.size() << "\n";
    
}