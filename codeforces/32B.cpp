#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, hasil = "";
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '-'){
            if(s[i + 1] == '-'){
                hasil += '2';
            }else{
                hasil += '1';
            }
            i++;
        }else{
            hasil += '0';
        }
    }
    cout << hasil << "\n";
    
}