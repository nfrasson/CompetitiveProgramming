#include <iostream>

using namespace std;

const int INF = 0x3f3f3f3f;

int dist[260][260];

int main(){
    int s, c; cin >> s >> c;
    int a, b, d;

    for(int i = 1; i <= s; i++)
        for(int j = 1; j <= s; j++)
            dist[i][j] = INF;

    for(int i = 0; i < c; i++){
        cin >> a >> b >> d;
        dist[a][b] = min(dist[a][b], d);
        dist[b][a] = dist[a][b];
    }
    
    for(int i = 1; i<=s; i++)
        dist[i][i] = 0;
    
    for(int k = 1; k <= s; k++)
    for(int i = 1; i <= s; i++)
        for(int j = 1; j <= s; j++)
            dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    
    int resp = INF;

    for(int i = 1; i <= s; i++){
        int maior = 0;
        for(int j = 1; j <= s; j++){
            maior = max(maior, dist[i][j]);
        }
        resp = min(resp, maior);
    }

    cout << resp << endl;
}