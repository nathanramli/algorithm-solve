#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, kelompok = 0; 
    string last = "", magnet;
    cin >> n;
    while (n--){
        cin >> magnet;
        if(last != magnet) kelompok++;
        last = magnet;
    }
    cout << kelompok << "\n";
}