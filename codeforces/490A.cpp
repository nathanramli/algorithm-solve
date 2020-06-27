#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, team = 0;
    cin >> n;
    vector<int> maths, physical, programming;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 1) programming.push_back(i + 1);
        else if(x == 2) maths.push_back(i + 1);
        else physical.push_back(i + 1);
    }
    team = min(maths.size(), min(physical.size(), programming.size()));
    cout << team << "\n";
    for (int i = 0; i < team; i++)
    {
        cout << programming[i] << " " << maths[i] << " " << physical[i] << "\n";
    }
}