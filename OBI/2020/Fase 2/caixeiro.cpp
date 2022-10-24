#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

/* 
    FIRST = Aresta adjacente
    SECOND = Peso do vértice
*/

vector<pair<int, int>> adj[1510];
vector<int> dist(1510);
int max_dist = INT_MIN, ans;

void dfs(int v){
    for(pair<int, int> tmp: adj[v]){
        if(dist[tmp.first] != -1) continue;
        dist[tmp.first] = dist[v] + tmp.second;
        dfs(tmp.first);
    }
    max_dist = (dist[v] > max_dist) ? dist[v] : max_dist;
}

int main(){
    int n, a, b, wg;
    cin >> n;
    pair<int, int> tmp;

    for(int i = 0; i < (n*(n-1))/2; i++){
        cin >> a >> b >> wg;
        
        tmp.first = b;
        tmp.second = wg;
        adj[a].push_back(tmp);

        tmp.first = a;
        adj[b].push_back(tmp);
    }

    int menor_dist = INT_MAX;

    for(int i = 1; i <= n; i++){
        max_dist = INT_MIN; 
        
        for(int i = 1; i <= n; i++) dist[i] = -1;
        
        dist[i]=0;
        dfs(i);

        menor_dist = (menor_dist > max_dist) ? max_dist : menor_dist;
    }

    cout << menor_dist << endl;
}