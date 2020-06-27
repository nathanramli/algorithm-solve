#include <bits/stdc++.h>
using namespace std;
int main(){
    int W = 0, B = 0, n = 8;
    string x;
    while (n--)
    {
        cin >> x;
        for (int i = 0; i < 8; i++)
        {
            if(x[i] == 'q') B += 9;
            else if(x[i] == 'Q') W += 9;
            else if(x[i] == 'r') B += 5;
            else if(x[i] == 'R') W += 5;
            else if(x[i] == 'b') B += 3;
            else if(x[i] == 'B') W += 3;
            else if(x[i] == 'n') B += 3;
            else if(x[i] == 'N') W += 3;
            else if(x[i] == 'p') B += 1;
            else if(x[i] == 'P') W += 1;
        }

    }
    if(W > B) cout << "White\n";
    else if(W < B) cout << "Black\n";
    else cout << "Draw\n"; 
}