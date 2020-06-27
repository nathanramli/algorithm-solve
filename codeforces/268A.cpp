#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0, temp, temp2;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> temp >> temp2;
        a[i] = temp;
        b[i] = temp2;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j]){
                count++;
            }
        }
    }
    cout << count << "\n";
}