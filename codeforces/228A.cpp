#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<long long> arr(4);
    int beli = 0;
    
    for(int i = 0; i < 4; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    for (int i = 0; i < 3; i++)
        if(arr[i] == arr[i + 1]) beli++;

    cout << beli << "\n";
}