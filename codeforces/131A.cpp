#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool kriteria[2];
    kriteria[0] = kriteria[1] = true;

    string word, fixed_word = "";
    cin >> word;
    int len = word.size();

    int i = 0;
    while (i < len && (kriteria[0] || kriteria[1]))
    {
        int ascii = (int)word[i];
        if (i > 0 && (ascii < 65 || ascii > 90))
            kriteria[0] = false;
        else if (i == 0 && (ascii < 97 || ascii > 122))
            kriteria[0] = false;

        if (ascii < 65 || ascii > 90) kriteria[1] = false;

        if((ascii >= 65 || ascii <= 90) && i > 0){
            fixed_word += word[i] + 32;
        }else if((ascii >= 97 && ascii <= 122) && i == 0){
            fixed_word += word[i] - 32;
        }else{
            fixed_word += word[i];
        }
        i++;
    }
    if(kriteria[0]){
        cout << fixed_word << "\n";
    }else if(kriteria[1]){
        fixed_word[0] = fixed_word[0] + 32;
        cout << fixed_word << "\n";
    }else{
        cout << word << "\n";
    }
}