#include <bits/stdc++.h>
using namespace std;

string s;

int answer(int idx_a, int idx_b, char curr){
    if(idx_b - idx_a == 1) // If length string from a to b side is 1
        return !(s[idx_a] == curr);

    // Get the middle side index
    int middle = idx_a + (idx_b - idx_a) / 2,
        need_character = (idx_b - idx_a) / 2;

    // Divide by 2 side
    int left = answer(idx_a, middle, curr + 1);
    int right = answer(middle, idx_b, curr + 1);
    
    // Get the left side answer then increase with this current answer

    // If the left side is needed less character change, then we do next for the right side (mid to highest index)
    left += need_character - count(s.begin() + middle, s.begin() + idx_b, curr);
    // vice versa
    right += need_character - count(s.begin() + idx_a, s.begin() + middle, curr);

    // return the minimum value
    return min(left, right);
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin >> s;
        cout << answer(0, n, 'a') << '\n';
    }
}