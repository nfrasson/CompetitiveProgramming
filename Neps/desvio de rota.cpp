#include <iostream>
#include <vector>
#include <set>

using namespace std;

typedef pair<int, int> pii;

vector<pii> adj[275];
vector<int> dist(275, -1);

int main(){
    int n, m, c, k; cin >> n >> m >> c >> k;
    int u, v, p;

    while(n!=0 && m!=0 && c != 0 && k != 0){
        while(m--){
            cin >> u >> v >> p;
            adj[u].push_back({p, v});
            adj[v].push_back({p, u});
        }
    }
}