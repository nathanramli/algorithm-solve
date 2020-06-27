#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long temp, hasil1 = 0, hasil2 = 0;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n-1);
    vector<int> c(n-2);
    for (int i = 0; i < n; i++){
        cin >> temp;
        a[i] = temp;
    }

    sort(a.begin(), a.begin() + n);

    for (int i = 0; i < n-1; i++){
        cin >> temp;
        b[i] = temp;
    }
    sort(b.begin(), b.begin() + n - 1);

    for (int i = 0; i < n - 2; i++){
        cin >> temp;
        c[i] = temp;
    }

    sort(c.begin(), c.begin() + n - 2);

    int x = 0, y = 0, z = 0;
    while (x < n && (hasil1 == 0 || hasil2 == 0)){
        if((a[x] != b[y] && a[x] != c[z]) || (y >= n - 1 && hasil1 == 0)){
            hasil1 = a[x];
            x++;
        }else if((a[x] == b[y] && a[x] != c[z]) || (z >= n - 2 && hasil2 == 0)){
            hasil2 = a[x];
            x++;
            y++;
        }else{
            x++;
            y++;
            z++;
        }
    }
    cout << hasil1 << "\n" << hasil2 << "\n";
}