#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q, temp;
    cin >> n;
    vector<int> toko(n);
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        toko[i] = temp;
    }
    sort(toko.begin(), toko.begin() + n);

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> temp;
        if (toko[n - 1] < temp)
            cout << n << "\n";
        else if (toko[0] > temp)
            cout << "0\n";
        else
        {
            int l = 0, r = n - 1, x = temp, hasil = -1;
            while (l <= r)
            {
                int m = (l + r) / 2;
                // jika mid lebih besar dari x
                if (toko[m] > x)
                {
                    r = m - 1;
                    // Jika ternyata index sebelumnya lebih kecil dari x, berarti index sebelumnya adalah nilai maxnya
                    if (toko[r] < x){
                        hasil = r;
                        break;
                    }

                    // jika mid lebih kecil sama dengan x
                }
                else
                {
                    l = m + 1;
                    // Jika ternyata index setelahnya lebih besar dari x, berarti itu adalah nilai maxnya
                    if (l < toko.size())
                    {
                        if (toko[l] > x){
                            hasil = m;
                            break;
                        }
                    }
                    else{
                        hasil = m;
                        break;
                    }
                }
            }

            cout << hasil + 1 << "\n";
        }
    }
}