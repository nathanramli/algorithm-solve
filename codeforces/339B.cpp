#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; // N is number of house, m is number of task
    cin >> n >> m;
    vector<int> arr(m);
    long long time = 0;
    for (int i = 0; i < m; i++){
        cin >> arr[i];
        if(i == 0) time = arr[i] - 1;
        else {
            if(arr[i] >= arr[i - 1])
                time += arr[i] - arr[i - 1];
            else
                time += n - arr[i - 1] + arr[i];
        }
    }
    cout << time << "\n";
}