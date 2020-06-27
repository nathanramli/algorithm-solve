#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        char kata[101];
        scanf("%s", kata);
        if(strlen(kata) > 10){
            printf("%c%d%c\n", kata[0], strlen(kata)-2, kata[strlen(kata)-1]);   
        }else{
            printf("%s\n", kata);
        }
    }
}