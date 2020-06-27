#include <bits/stdc++.h>
int main(){
    int n, x, y;
    std::cin >> n;
    std::vector<int> passed(n);

    std::cin >> x;
    for (int i = 0; i < x; i++){
        std::cin >> y;
        passed[y - 1] = 1;
    }
    std::cin >> x;
    for (int i = 0; i < x; i++){
        std::cin >> y;
        passed[y - 1] = 1;
    }

    bool clear = true;
    for (int i = 0; i < n; i++){
        if(passed[i] != 1){
            clear = false;
            break;
        }
    }
    if(clear) std::cout << "I become the guy.\n";
    else std::cout << "Oh, my keyboard!\n";
}