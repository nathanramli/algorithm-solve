#include <bits/stdc++.h>
using namespace std;
int main(){
    string angka = "", nol = "0000";
    int n, x, len, pangkat;
    cin >> n;
    while (n--)
    {
        cin >> x;
        vector<string> pecahan;
        angka = to_string(x);
        len = angka.size();
        for (int i = 1; i <= len; i++)
        {
            string tempx = "";
            tempx += angka[len - i];
            if(tempx != "0"){
                if(i > 1){
                    tempx += nol.substr(0, i - 1);
                }
                pecahan.push_back(tempx);
            }
        }

        len = pecahan.size();
        cout << len << "\n";
        for (int i = 0; i < len; i++)
        {
            if(i > 0) cout << " ";
            cout << pecahan[i];
        }
        cout << "\n";       
    }
    
}