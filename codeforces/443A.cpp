#include <vector>
#include <iostream>

using namespace std;

int main(){
    string str;
    getline(cin, str);
    int len = str.size(), distinct = 0;
    vector<int> p(26);
    for(int i = 1; i < len - 1; i++){
        if((int)str[i] >= 97 && (int)str[i] <= 122){
            if(p[((int)str[i] - 97)] != 1) distinct++;
            p[((int)str[i] - 97)] = 1;
        }
    }
    cout << distinct << "\n";
}