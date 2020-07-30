#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int r,p,s;
        map<char, int> score;
        string str;
        cin >> str;
        score['R']=count(str.begin(), str.end(), 'R');
        score['P']=count(str.begin(), str.end(), 'P');
        score['S']=count(str.begin(), str.end(), 'S');

        char ch;
        int mx = -1;

        for(const auto& vl : score) {
            if(vl.second > mx) mx=vl.second,ch=vl.first;
        }
        if(ch=='R') for(auto i : str) cout << 'P';
        else if(ch=='P') for(auto i : str) cout << 'S';
        else for(auto i : str) cout << 'R';
        cout << '\n';
    }
}