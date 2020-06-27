#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, max_height = 1, combo = 1, tower = 0;
    cin >> n;
    vector<int> wood(n);
    for (int i = 0; i < n; i++) cin >> wood[i];
    sort(wood.begin(), wood.end());
    for (int i = 0; i < n; i++){
        if(wood[i] == wood[i - 1]){
            combo++;
            max_height = max(combo, max_height);
        }else{
            combo = 1;
            tower++;
        }
    }
    cout << max_height << " " << tower << "\n";
}