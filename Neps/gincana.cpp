#include <iostream>
#include <vector>

using namespace std;

#define MAX 1010

vector<int> adj[MAX];
vector<bool> visitados(MAX);

void dfs(int v){
    visitados[v] = true;

    for(int aluno: adj[v]){
        if(visitados[aluno]) continue;
        visitados[aluno] = true;
        dfs(aluno);
    }
}

int main(){
    int n, m, i, j, times=1; cin >> n >> m;

    while(m--){
        cin >> i >> j;
        adj[i].push_back(j);
        adj[j].push_back(i);
    }
    
    dfs(1);

    for(int i = 1; i <= n; i++){
        if(!visitados[i]){
            times++;
            dfs(i);
        }
    }
    cout << times << endl;
}