#include <bits/stdc++.h>
using namespace std;

vector<string> split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

int main(){
    char d[101];
    scanf("%s", &d);
    string s;
    s.push_back(d);
    printf("%s", s);
    vector<string> arr = split(s, "+");
    for(int i = 0; i < arr.size()-1; i++){
        int swap = i;
        for(int j = i+1; j < arr.size(); j++){
            if(arr[swap] < arr[j])
                swap = j;
        }
        if(i != swap){
            string tempo = arr[i];
            arr[i] = arr[swap];
            arr[swap] = tempo;
        }
    }

    for(int i = 0; i < arr.size(); i++){
        printf("%d", arr[i]);
        if(i != arr.size()-1)
            printf("+");
        else
            printf("\n");
    }

}