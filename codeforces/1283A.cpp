#include <bits/stdc++.h>
using namespace std;
int main(){
    int newYear = 24*60;
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int hours, minutes;
        scanf("%d %d", &hours, &minutes);
        printf("%d\n", newYear-(hours*60+minutes));
    }
}