#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, step;
    scanf("%d", &n);
    char kunci1[n+1];
    char kunci2[n+1];
    scanf("%s", kunci1);
    scanf("%s", kunci2);
    step = 0;
    for(int i = 0; i < n; i++){
        int angka1, angka2;
        angka1 = (int)kunci1[i]-48;
        angka2 = (int)kunci2[i]-48;
        if(angka1 < angka2){
            if(angka2 - angka1 > 5){
                step += (9 - angka2) + (angka1 + 1);
            }
            else{
                step += angka2 - angka1;
            }
        }
        else if(angka1 > angka2){
            if(angka1 - angka2 > 5){
                step += (9 - angka1) + (angka2 + 1);
            }
            else{
                step += angka1 - angka2;
            }
        }
        // if equal then pass
    }
    printf("%d\n", step);
}