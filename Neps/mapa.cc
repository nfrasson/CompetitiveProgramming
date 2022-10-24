#include <iostream>

using namespace std;

int viz[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valido(int i, int j, int l, int c){
    return i > 0 && j > 0 && i <= l && j <= c;
}

int main(){
    int l, c, x; cin >> l >> c;
    char v[l+1][c+1];
    bool visitado[l+1][c+1];
    int ini_i, ini_j;


    for(int i = 1; i <= l; i++){
        for(int j = 1; j <= c; j++){
            visitado[i][j] = false;
            cin >> v[i][j];
            if(v[i][j] == 'o'){
                ini_i = i;
                ini_j = j;
            }
        }
    }
    bool encontrou = false;
    int ii, jj;
    while(!encontrou){
        for(int i = 0; i < 4; i++){
            ii = ini_i+viz[i][0];
            jj = ini_j+viz[i][1];
            if(valido(ii, jj, l, c)){
                if(v[ii][jj]=='H' && !visitado[ii][jj]){
                    visitado[ini_i][ini_j] = true;
                    ini_i = ii;
                    ini_j = jj;
                    break;
                }
            }
            if(i == 3)
                encontrou = true;
        }
    }
    cout << ini_i << ' ' << ini_j << endl;
}