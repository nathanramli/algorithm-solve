#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, maximum = 0, minimum = 100, index_max = -1, index_min = -1, hasil;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(maximum < a[i]) index_max = i;
        if(minimum >= a[i]) index_min = i;
        maximum = max(maximum, a[i]);
        minimum = min(minimum, a[i]);
    }

    if(maximum == minimum){
        hasil = 0;
    }else{
        hasil = ((n - 1) - index_min) + (index_max);

        if(index_min < index_max) hasil -= 1;
    }
    cout << hasil << "\n";
}