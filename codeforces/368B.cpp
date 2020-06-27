#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, distinct = 0, tertinggi = 0, max_a_index = 0, max_e_index = 0, curr_a_index = 0, curr_e_index = 0, x;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(100000);
    vector<int> jawaban(n+1);
    jawaban[0] = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = n-1; i >= 0; i--){

        if(b[a[i] - 1] != 1){
            distinct++;
            b[a[i] - 1] = 1;
        }
        tertinggi = max(distinct, tertinggi);
        jawaban[i + 1] = tertinggi;
    }

    for(int i = 0; i < m; i++){
        cin >> x;
        cout << jawaban[x] << "\n";
    }
}