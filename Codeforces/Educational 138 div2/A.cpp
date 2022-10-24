#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    int n, m, x, y;

    while(t--){
        cin >> n >> m;
        vector<pii> rooks;
        bool pos[n][n];

        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                pos[i][j] = false;
        
        while(m--){
            cin >> x >> y;

            rooks.push_back({x, y});
            pos[x][y] = true;

        }
        bool found = false;
        for(pii rook: rooks){
            for(int j = 1; j <= n; j++){
                if(j == rook.second) continue;
                for(int i = 1; i <= n; i++){
                    if(pos[i][j] == true) break;
                    if(i == n){
                        found = true;
                        break;
                    }
                }
                if(found) break;
            }
            if(found)break;
            for(int i = 1; i <= n; i++){
                if(i == rook.first) continue;
                for(int j = 1; j <= n; j++){
                    if(pos[i][j] == true) break;
                    if(j == n){
                        found = true;
                        break;
                    }
                }
            }
            if(found) break;
        }
        if(found){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}