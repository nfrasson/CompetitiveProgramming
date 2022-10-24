#include <iostream>

using namespace std;

#define INF 0x3f3f3f3f;
const int N = 1e3 + 10;
const int M = 1e3 + 10;

int v[N][M];
bool visitados[N][M];

int viz[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool valido(int ii, int jj, int n, int m){
    return ii >= 0 && jj >= 0 && ii <= n && jj <= m && v[ii][jj] != 0 && !visitados[ii][jj];
}

int dfs(int ii, int jj, int n, int m){
    if(v[ii][jj] == 3){
        return 1;
    }

    visitados[ii][jj] = true;
    
    int ans = INF;
    for(int i = 0; i < 4; i++){
        int next_i = ii + viz[i][0];
        int next_j = jj + viz[i][1];

        if(valido(next_i, next_j, n, m)){
            ans = min(ans, dfs(next_i, next_j, n, m));
        }
    }
    return ans+1;
}



int main(){
    int n, m;

    cin >> n >> m;

    int begin_i, begin_j;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
            if(v[i][j] == 2){
                begin_i = i;
                begin_j = j;
            }
        }
    }

    cout << dfs(begin_i, begin_j, n, m);
}