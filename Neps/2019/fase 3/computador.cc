#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<pair<int, pair<int, int>>> comandos;
    int a, i, v;

    for(int k = 0; k < m; k++){
        cin >> a >> i;

        if(a == 1 || a == 2){
            cin >> v;
            comandos.push_back({a, {i, v}});
        }

        else{
            int ans = 0;
            for(pair<int, pair<int, int>>tmp: comandos){
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