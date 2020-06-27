#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    string n;
    cin >> n >> k;
    while (k--)
    {
        if(n[n.size() - 1] == '0') n.erase(n.end() - 1);
        else n[n.size() - 1] = n[n.size() - 1] - 1;
    }
    cout << n << "\n";
}