#include <bits/stdc++.h>
using namespace std;
string sa, sb;
int t,n;

void inverse_bit(int x){
    for(int i=0;i<=x;i++){
        if(sa[i] == '1') sa[i] = '0';
        else sa[i] = '1';
    }
}

int main(){

    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> sa;
        cin >> sb;
        vector<int> step;
        for(int i=n-1;i>=0;i--){
            if(sa[i] == sb[i]) continue;            
            if(sa[0] == sb[i]){
                inverse_bit(0);
                reverse(sa.begin(), sa.begin() + 1);

                inverse_bit(i);
                reverse(sa.begin(), sa.begin() + i + 1);                
                step.push_back(1);
            }else{
                inverse_bit(i);
                reverse(sa.begin(), sa.begin() + i + 1);
            }
            
            step.push_back(i+1);
        }
        int x = step.size();
        cout << x;
        for (int i = 0; i < step.size(); i++)
            cout << ' ' << step[i];
        cout << '\n';
    }
    
}