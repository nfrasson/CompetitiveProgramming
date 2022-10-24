#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;

    while(t--){
        char board[8][8];

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                cin >> board[i][j];
            }
        }
        bool found = false;
        for(int i = 2; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(i == 0 && j > 0){
                    if(board[i][j+1] == '#' && board[i][j-1] == '#'){
                        cout << i+1 << ' ' << j+1 << endl;
                        found = true;
                        break;
                    }
                }
                else if(i > 0 && j == 0){
                    if(board[i+1][j] == '#' && board[i-1][j] == '#'){
                        cout << i+1 << ' ' << j+1 << endl;
                        found = true;
                        break;
                    }
                }
                else if(i > 0 && j > 0){
                    if(board[i])
                }
            }
            if(found) break;
        }
    }
    
}