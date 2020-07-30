#include <bits/stdc++.h>
using namespace std;

#define fr(i,a,n) for(int i=a;i<n;i++)
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(0)

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;

const int N = 2e5 + 1;
vi notGifted, notReceived;
int gifted[N], received[N];

int main(){
    fast;
    int n;
    cin >> n;
    fr(i, 1, n + 1){
        cin >> gifted[i];

        if(gifted[i] == 0) notGifted.pb(i);
        else received[gifted[i]] = 1;
    }

    // Gather all notGifted and notReceived person
    fr(i, 1, n + 1) if(received[i] != 1) 
        notReceived.push_back(i);

    fr(i, 0, notGifted.size()){
        if(notGifted[i] == notReceived[i]) {
            if(i > 0) swap(notGifted[i - 1], notGifted[i]);
            else swap(notGifted[i + 1], notGifted[i]);
        }
    }

    fr(i, 0, notGifted.size()) gifted[notGifted[i]] = notReceived[i];

    fr(i, 1, n + 1) {
        cout << gifted[i];

        if(i == n) cout << '\n';
        else cout << ' ';
    }
}