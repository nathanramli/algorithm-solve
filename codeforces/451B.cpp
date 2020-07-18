#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, start = -1, stop = -1, is_possible = 0;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        if(a[i] != b[i]) {
            if(start == -1) {
                start = i;
                for (int j = start + 1; j < n; j++)
                {
                    if(a[j] == b[i]) {
                        for (int k = 0; k <= j - i; k++)
                        {
                            if(a[j - k] != b[i + k]){
                                is_possible = -1;
                                break;
                            }
                            if(k == j - i) {
                                stop = j;
                                i += k;
                            }
                        }
                    }
                    if(is_possible == -1) break;
                }
                if(is_possible == -1) break;
            }else{
                is_possible = -1;
                break;
            }
        }
    }
    if(is_possible == -1) cout << "no\n";
    else {
        if(start == -1 && stop == -1) stop = start = 0;

        cout << "yes\n";
        cout << start + 1 << " " << stop + 1 << '\n';
    }
    
}