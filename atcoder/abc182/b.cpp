#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, x, ggcd = 0, gans = 0;

int main()
{
    cin >> n;
    int ans[1000];
    memset(ans, 0, sizeof(ans));

    for(int i = 0; i < n; i++){
        cin >> x;
        for(int j = 2; j <= x; j++){
            if(x % j == 0){
                ans[j]++;
                if(ggcd < ans[j])
                    gans = j;
                ggcd = max(ggcd, ans[j]);
            }
        }
    }
    cout << gans << '\n';
}