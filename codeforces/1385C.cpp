#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int t1 = 0; t1 < t; t1++)
    {
        int n, awal = 0, akhir, base_value = 0, removed = 0;
        cin >> n;
        akhir = n - 1;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        while (awal < akhir)
        {
            if(a[awal] < base_value || a[akhir] < base_value) {
                if(a[akhir] < base_value) 
                    awal++;
                removed = awal;
                akhir = n - 1;
                base_value = 0;
            }


            if(a[awal] <= a[akhir]) {
                base_value = a[awal];
                awal++;
            }else{
                base_value = a[akhir];
                akhir--;
            }
        }
        cout << removed << '\n';
    }
}