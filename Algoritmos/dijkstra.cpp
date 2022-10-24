#include <iostream>
#include <set>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int, int> pii;

int n;
vector<int> dist(n);
vector<pii> adj[99999];

int dista[99999][99999];
int viz[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
pii ini = {0,0};
pii fim;

bool valido(int i, int j, int n, int m){
    return i>=0 && j>=0 && i<n && j<m;
}



void dijkstra_peso(int v){
    for(int i = 0; i < n; i++) dist[i] = -1;

    set<pii> fila;
    
    pii tmp;
    fila.insert({v, 0});
    while(!fila.empty()){
        tmp = *fila.begin();
        fila.erase(fila.begin());

        int pos = tmp.second;
        int peso = tmp.first;

        if(dist[pos] != -1) continue;

        dist[pos] = peso;
        
        for(auto viz: adj[pos]){
            if(dist[viz.first] != -1) continue;
            fila.insert({viz.second+dist[v], viz.first});
        }
    }
}

int main(){

}