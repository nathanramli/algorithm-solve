#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, curX, curY, tempX, tempY;
    string s, x, y, msg;
    cin >> t;
    while (t--)
    {
        curX = 0;
        curY = 0;
        bool can = true;
        cin >> n;
        map<string, int> cordx;
        map<string, int> cordy;
        vector<string> cord(n);
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            cord[i] = string(4 - x.size(), '0') + x + ' ' + string(4 - y.size(), '0') + y;
            cordx.insert({cord[i], stoi(x)});
            cordy.insert({cord[i], stoi(y)});
        }
        sort(cord.begin(), cord.end());

        msg = "";
        for (int i = 0; i < n; i++){
            tempX = cordx[cord[i]] - curX;
            tempY = cordy[cord[i]] - curY;
            if(tempX < 0 || tempY < 0 ){
                can = false;
                break;
            }
            if(tempX > 0) msg += string(tempX, 'R');
            if(tempY > 0) msg += string(tempY, 'U');

            curX = cordx[cord[i]];
            curY = cordy[cord[i]];
        }
        if(can){
            cout << "YES\n" << msg << "\n";
        }else{
            cout << "NO\n";
        }
    }
    
}