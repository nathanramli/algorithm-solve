#include <bits/stdc++.h>
using namespace std;
int main(){
    int nilai = 0;
    char pertama[101], kedua[101];
    scanf("%s %s", &pertama, &kedua);
    for(int i = 0; i < strlen(pertama); i++){
        char huruf1 = tolower(pertama[i]);
        char huruf2 = tolower(kedua[i]);
        if(huruf1 > huruf2){
            nilai = 1;
            break;
        }
        else if(huruf1 < huruf2){
            nilai = -1;
            break;
        }
    }
    printf("%d\n", nilai);
}