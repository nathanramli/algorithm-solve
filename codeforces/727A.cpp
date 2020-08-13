#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool found = false;

struct Node {
    ll val;
    Node * left;
    Node * right;
    Node * root;
    bool visited;
    stack<ll> rute;
};

void dfs(struct Node * tree){
    if(!found){
        if(!tree->visited){
        }
    }
}

int main(){
    ll a, b;
    cin >> a >> b;
    
    struct Node * tree = new Node;
    tree->val = a;
    dfs(tree);

}