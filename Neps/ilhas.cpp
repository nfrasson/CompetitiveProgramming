#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

vector<pair<int, int>> adj[1010];
vector<int> dist(1010);
int tmp_dist = INT_MIN;
int maior_dist = INT_MIN;
int menor_dist = INT_MAX;
int SERVER;

void dfs(int v){
    for(pair<int, int> tmp: adj[v]){
        if(tmp.first == SERVER) break;
        if(dist[tmp.first] != -1) continue;
        
        dist[tmp.first] = dist[v] + tmp.second;

        dfs(tmp.first);
    }
    cout << dist[v] << endl;
    tmp_dist = (dist[v] > tmp_dist) ? dist[v] : tmp_dist;
}

int main(){
    int n, m; cin >> n >> m;
    int a, b, p;
    int s;
    pair<int, int> tmp;

    for(int i = 0; i < m; i++){
        cin >> a >> b >> p;
        
        tmp.first = b;
        tmp.second = p;
        adj[a].push_back(tmp);

        tmp.first = a;
        adj[b].push_back(tmp);
    }

    

    cin >> SERVER;

    for(int i = 1; i <= n; i++){
        if(i == SERVER) continue; 

        for(int j = 1; j <= n; j++) dist[j] = -1;
        dist[i] = 0;
        dfs(i);

        maior_dist = (maior_dist < tmp_dist) ? tmp_dist : maior_dist;
        menor_dist = (menor_dist > tmp_dist) ? tmp_dist : menor_dist;
    }

    cout << maior_dist << ' ' << menor_dist << endl;
}