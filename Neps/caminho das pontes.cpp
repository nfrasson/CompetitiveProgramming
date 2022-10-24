#include <iostream>
#include <set>
#include <vector>

using namespace std;

typedef pair<int, int> pii;

vector<pii> adj[101000];
vector<int> dist(101000, -1);

int dijkstra(int n, int m){
    int buracos = 0;

    set<pii> fila;
    pii tmp;

    fila.insert({0, 0});

    while(!fila.empty()){
        tmp = *fila.begin();
        fila.erase(fila.begin());

        int pos = tmp.second;
        int peso = tmp.first;
        buracos+=peso;

        if(pos == n+1){
            return buracos;
        }

        if(dist[pos] != -1) continue;
        
        dist[pos] = peso;

        fila.clear();
        for(pii viz: adj[pos]){
            if(dist[viz.second] != -1) continue;
            fila.insert(viz);
        }
    }
}

int main(){
    int n, m; cin >> n >> m;
    int s, t, b;
    pii tmp;

    while(m--){
        cin >> s >> t >> b;

        tmp.first = b;
        tmp.second = t;
        adj[s].push_back(tmp);

        tmp.second = s;
        adj[t].push_back(tmp);
    }
    int ans = dijkstra(n, m);
    cout << ans << endl;
}