#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int, int> pii;

int n;
int dista[99999][99999];
int viz[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
pii ini = {0,0};
pii fim;

bool valido(int x, int y, int n, int m){
    return x >= 0 && y >= 0 && x < n && y < m;
}

int bfs(int v){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) dista[i][j] = -1;

    queue<pii> fila;
    
    pii tmp;
    fila.push(ini);
    dista[ini.first][ini.second] = 0;

    while(!fila.empty()){
        tmp = fila.front();
        fila.pop();

        if(tmp.first == fim.first && tmp.second == fim.second)
            return dista[tmp.first][tmp.second];

        for(int i = 0; i < 4; i++){
            if(valido(tmp.first+viz[i][0], tmp.second+viz[i][1], n, n) && dista[tmp.first+viz[i][0]][tmp.second+viz[i][1]] == -1){
                fila.push({tmp.first+viz[i][0], tmp.second+viz[i][1]});
                dista[tmp.first+viz[i][0]][tmp.second+viz[i][1]] = dista[tmp.first][tmp.second]+1;
            }
        }
    }
}

int main(){

}