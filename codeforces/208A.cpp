#include <bits/stdc++.h>
using namespace std;
int main(){
    string remix, song = "";
    cin >> remix;

    int i = 0;
    while (i < remix.size())
    {
        if(remix[i] == 'W' && remix[i + 1] == 'U' && remix[i + 2] == 'B'){
            if(i > 0 && remix[i - 1] != ' '){
                remix[i] = ' ';
                remix.erase(remix.begin() + i + 1, remix.begin() + i + 3);
            }else{
                remix.erase(remix.begin() + i, remix.begin() + i + 3);
            }
        }else{
            i++;
        }
    }
    if(remix[remix.size() - 1 ] == ' ') remix.erase(remix.end() - 1);
    cout << remix << "\n";
}