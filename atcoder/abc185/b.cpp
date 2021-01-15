#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n,m,t,cur,x,y,last;
    cin >> n >> m >> t;
    cur = n;
    last = 0;
    bool ans = true;
    for(int i=0;i<m;i++)
    {
        cin >> x >> y;
        cur = max(cur - (x - last), 0);
        if(!cur)
            ans = false;
        cur = min(cur + (y - x), n);
        last = y;
    }
    if(cur - (t - last) <= 0)
        ans = false;
    cout << (ans ? "Yes" : "No") << '\n';
}