#include <bits/stdc++.h>

using namespace std;
int main(){
    long long n, k;
    scanf("%lld", &n);
    k = 0;

    while(pow(2, k)*5 < n){
        n -= pow(2, k)*5;
        k += 1;
    }

    if(k != 0)
        n = ceil( (double)n / (double)pow(2, k));

    if(n == 1)
        printf("Sheldon\n");
    else if(n == 2)
        printf("Leonard\n");
    else if(n == 3)
        printf("Penny\n");
    else if(n == 4)
        printf("Rajesh\n");
    else if(n == 5)
        printf("Howard\n");
}