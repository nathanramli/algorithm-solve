#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    long long int n, m, a, hasil;
    scanf("%lld %lld %lld", &n, &m, &a);
    hasil = ceil(n/ (double)a) * ceil(m/ (double)a);
    printf("%lld\n",hasil);
}