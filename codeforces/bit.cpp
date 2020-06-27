#include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 0; 
    int n;
    scanf("%d", &n);
    while(n--){
        char inputan[4];
        scanf("%s", &inputan);
        if(strcmp(inputan, "--X") == 0 || strcmp(inputan, "X--") == 0)
            x -= 1;
        else if(strcmp(inputan, "++X") == 0 || strcmp(inputan, "X++") == 0)
            x += 1;
    }
    printf("%d\n", x);
}