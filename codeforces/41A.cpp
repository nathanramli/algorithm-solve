#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool yes = true;

    string word1, word2;
    cin >> word1 >> word2;
    int len1 = word1.size(), len2 = word2.size();
    if (len1 != len2)
        cout << "NO\n";
    else
    {
        for (int i = 0; i < len1; i++)
        {
            if(word1[i] != word2[len2 - 1 - i]){
                yes = false;
                break;
            }
        }
        if(yes) cout << "YES\n";
        else cout << "NO\n";
    }
}