#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, hasil = 0, divide;
    cin >> a >> b;
    hasil = a;
    while (a >= b)
    {
        divide = a / b;
        hasil += divide;
        a = a % b;
        a += divide;
    }
    cout << hasil << "\n";
}