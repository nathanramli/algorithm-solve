#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;

    vector<int> naga(n);
    vector<int> kuat(n);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        naga[i] = x;
        kuat[i] = y;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int swap = i;
        for (int j = i + 1; j < n; j++)
        {
            if (naga[swap] > naga[j])
                swap = j;
        }

        if (i != swap)
        {
            int temp = naga[i];
            naga[i] = naga[swap];
            naga[swap] = temp;

            temp = kuat[i];
            kuat[i] = kuat[swap];
            kuat[swap] = temp;
        }
    }

    int i = 0;
    while (i < n)
    {
        if (s > naga[i])
        {
            s += kuat[i];
            i++;
        }
        else
            break;
    }

    if(i == n) cout << "YES\n";
    else cout << "NO\n";
}