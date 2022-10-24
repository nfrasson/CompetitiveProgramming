#include <iostream>
#include <vector>

using namespace std;

int n;

vector<pair<int, int>> adjacentes[1001];
vector<int> visitados(1001);
vector<int> dist(1001);

void dfs(int vertice){
    visitados[vertice] = 1;

    for(pair<int, int> x: adjacentes[vertice]){
        if(visitados[x.first]) continue;
        dist[x.first] = dist[vertice] + x.second;
        dfs(x.first);
    }
}

int main(){
    int a, b, wg;
    pair<int, int> tmp;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a >> b >> wg;

        tmp.first = b;
        tmp.second = wg;

        adjacentes[a].push_back(tmp);

        tmp.first = a;
        adjacentes[b].push_back(tmp);
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) dist[j] = -1;

        dfs(i);
    }
}