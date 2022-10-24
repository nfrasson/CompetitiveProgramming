#include <iostream>
#include <limits.h>

using namespace std;

const int INF = 0x3f3f3f3f;

int dist[110][110];

int main(){
    int n, m, u, v, w;
    cin >> n >> m;

    for(int i = 0; i<n; i++)
        for(int j=0; j<n; j++) dist[i][j] = INF;
    
    for(int i = 0; i<n; i++) dist[i][i] = 0;

    for(int i = 0; i < m; i++){
        cin >> u >> v >> w;
        dist[u][v] = min(dist[u][v], w);
        dist[v][u] = dist[u][v];
    }


    for(int k = 0;k < n;k++)
    for(int i = 0;i < n;i++)
        for(int j = 0;j < n;j++)
	        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

    int resp = INF;
    for(int i = 0; i < n; i++){
        int maior = 0;
        for(int j=0; j<n; j++){
            maior = max(maior, dist[i][j]);
        }
        resp = min(resp, maior);
    }
    
    cout << resp << endl;
}