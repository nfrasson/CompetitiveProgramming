#include <iostream>
#include <vector>

using namespace std;

vector<int> adj[5000];
vector<bool> visitados;
int count = 0;

void dfs(int v){
    visitados[v] = true;
    count++;

    for(int tmp: adj[v]){
        if(visitados[tmp]) continue;
        dfs(tmp);
    }
}

int main(){
    int n, m, x, y;
    cin >> n >> m;
    visitados.resize(n+1);
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    if(n != m){
        cout << "NO" << endl;
        return 0;
    } 

    dfs(1);

    if(count == n) cout << "FHTAGN!" << endl;
    else cout << "NO" << endl;
}