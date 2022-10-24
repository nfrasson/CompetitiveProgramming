#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<pair<int, pair<int, int>>> comandos(m, {-1,{-1,-1}});
    vector<int> last_command (200000, 0);
    int a, i, v;
    int last = 0;

    for(int k = 0; k < m; k++){
        cin >> a >> i;

        if(a == 1 || a == 2){
            cin >> v;
            comandos[last] = {a, {i, v}};
            last++;
        }

        else{
            int ans = 0;
            for(int l = last_command[i]; l < m; l++){
                pair<int, pair<int, int>>tmp = comandos[l];

                if(tmp.first == -1){
                    last_command[i] = l-1;
                    break;
                }

                if(tmp.first == 1){
                    if(i >= tmp.second.first){
                        if(tmp.second.second - (i - tmp.second.first) > 0)
                            ans += (tmp.second.second - (i - tmp.second.first));
                    }
                }
                else if(tmp.first == 2){
                    if(i <= tmp.second.first){
                        if(tmp.second.second - (tmp.second.first - i) > 0)
                            ans += (tmp.second.second - (tmp.second.first - i));
                    }
                }
            }
            cout << ans << endl;
        }
    }
}