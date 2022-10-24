#include <iostream>
#include <vector>

using namespace std;

vector<int> adj[200001];
vector<int> pai(200001);
vector<int> visited(200001, -1);
vector<int> path;

void dfs(int i, int end){
    visited[i] = 1;
    for(int v: adj[i]){
        if(visited[v] == 1) continue;
        pai[v] = i;
        if(v == end){
            return;
        }
        dfs(v, end);
    }
    return;
}

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    int u, v;


    for(int i = 0; i < n-1; i++){
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(x, y);
    int current = y;
    while(true){
        path.push_back(current);
        if(current == x) break;
        current = pai[current];
    }

    for(int i = int(path.size())-1; i >= 0; i--)
        cout << path[i] << ' ';
}