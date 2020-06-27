#include <bits/stdc++.h>

using namespace std;

int main(){
    bool baw = true;
    int n, m;
    cin >> n >> m;
    char color;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
              cin >> color;
              if(color == 'C' || color == 'M' || color == 'Y') baw = false; 
        }
    }

    if(baw) cout << "#Black&White\n";
    else cout << "#Color\n";
    
}