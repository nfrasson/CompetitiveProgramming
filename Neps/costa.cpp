#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1e3 + 5;

char v[MAX][MAX];
int viz[4][2]{{0, -1}, {1, 0}, {0, 1}, {-1, 0}};
vector<pair<int, int>> islands;

bool valido(int i, int j, int m, int n){
    return i >= 0 && j >= 0 && i < m && j < n;
}

bool costa(int ii, int jj, int m, int n){
    if(ii == 0 || jj == 0 || ii == m-1 || jj == n-1) 
        return true;

    for(int i = 0; i < 4; i++){
        int next_i = ii + viz[i][0];
        int next_j = jj + viz[i][1];

        if(valido(next_i, next_j, m ,n) &&  v[next_i][next_j] == '.')
            return true;
    }
    return false;
}

int main(){
    int m, n, ans=0;
    cin >> m >> n;
    pair<int, int> pos;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
            if(v[i][j] == '#'){
                pos.first = i;
                pos.second = j;
                islands.push_back(pos);
            }
        }
    }

    for(pair<int, int> tmp: islands){
        if(costa(tmp.first, tmp.second, m, n)) ans++;
    }
    
    cout << ans << endl;
}