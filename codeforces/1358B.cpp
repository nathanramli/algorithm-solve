#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, curr_grannies, temp_grannies;
    cin >> t;
    while (t--)
    {
        curr_grannies = 1;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++){
            if(curr_grannies >= a[i]){
                curr_grannies++;
            }else{
                temp_grannies = 0;
                int j;
                for (j = i; j < n; j++)
                {
                    if(a[j] <= (temp_grannies++) + curr_grannies) {
                        break;
                    }
                }
                j--;
                if(temp_grannies - 1 + curr_grannies >= a[j]){
                    curr_grannies += temp_grannies;
                    i = j + 1;
                }else
                    break;
            }
        }
        cout << curr_grannies << "\n";
    }    
}