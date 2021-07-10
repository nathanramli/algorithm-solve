#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    int w;
    scanf("%d", &w);
    if(w >= 4){
        if( (w - 2) % 2 == 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    else
        printf("NO\n");
}