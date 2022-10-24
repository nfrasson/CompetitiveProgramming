#include <iostream>
#include <vector>

using namespace std;

vector<int> adj[210];
vector<int> dist(210, -1);
vector<int> saloes(210);
int maior = -1;

void dfs(int v){
    for(int i: adj[v]){
        if(dist[i] != -1) continue;
        dist[i] = dist[v] + 1;
        dfs(i);
    }
    maior = (dist[v] > maior) ? dist[v] : maior;
}

int main(){
    int s, t, p; cin >> s >> t >> p;
    int i, j;

    for(int i = 1; i <= s; i++) cin >> saloes[i];

    while(t--){
        cin >> i >> j;

        if(saloes[i] > saloes[j])
            adj[i].push_back(j);
        else if(saloes[i] < saloes[j])
            adj[j].push_back(i);
        else{
            adj[i].push_back(j);
            adj[j].push_back(i);
        }
    }
    dist[p] = 0;
    dfs(p);

    cout << maior << endl;
}