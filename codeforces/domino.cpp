#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n, hasil;
    scanf("%d %d", &m, &n);
    if(m%2 == 0){
        hasil = m/2*n;
    }else if(n%2 == 0){
        hasil = n/2*m;
    }else{
        hasil = (floor(m/(double)2)*n)+(floor(n/(double)2));
    }
    printf("%d\n", hasil);
}