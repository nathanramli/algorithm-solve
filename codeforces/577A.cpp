#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, count = 0;
    ll x;

    cin >> n >> x;

    if (x == 1)
    {
        cout << 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {

            if(x % i == 0){
                ll y = (ll)i * (ll)n;
                if(y >= x){
                    count++;
                }
            }
        }

        cout << count;
    }
    cout << "\n";
}