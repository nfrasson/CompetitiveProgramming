#include <iostream>
#include <vector>

using namespace std;

int v[8][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool checkCell(int ii, int jj, int n, int m){
    for(int i = 0; i < 8; i++){
        int i_next = ii+v[i][0];
        int j_next = jj+v[i][1];
        if(i_next > 0 && i_next <= n && j_next > 0 && j_next <= m)
            return true;
    }
    return false;
}

int main(){
    int t, n, m; cin >> t;

    while(t--){
        cin >> n >> m;
        bool found = false;
        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(!checkCell(i, j, n, m)){
                    cout << i << ' ' << j << endl;
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        if(!found) cout << n << ' ' << m << endl;
    }
}