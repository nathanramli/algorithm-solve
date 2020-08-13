#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> val(n, vector<int>(n));
    for(int i=0; i<n; i++) for(int j=0; j<n; j++){
        if(i == 0 || j == 0) val[i][j] = 1;
        else val[i][j] = val[i][j] = val[i - 1][j] + val[i][j - 1];
    }
    cout << val[n - 1][n - 1] << '\n';
}