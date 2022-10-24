#include <bits/stdc++.h>

using namespace std;

int main(){
    int p, s; cin >> p >> s;
    int u, v;
    vector<pair<int, int>> pontos;

    for(int i = 0; i < s; i++){
        cin >> u >> v;
        bool found = false;
        for(int j = 0; j < int(pontos.size()); j++){
            if(u < pontos[j].first && v >= pontos[j].first && v <= pontos[j].second){
                pontos[j].first = u;
                found = true;
                break;
            }
            else if(v > pontos[j].second && u >= pontos[j].first && u <= pontos[j].second){
                pontos[j].second = v;
                found = true;
                break;
            }
            else if(u <= pontos[j].first && v >= pontos[j].second){
                pontos[j].first = u;
                pontos[j].second = v;
                found = true;
                break;
            }
            else if(u >= pontos[j].first && u < pontos[j].second && v > pontos[j].first  && v <= pontos[j].second){
                found = true;
                break;
            }
            else if(u == pontos[j].second){
                pontos[j].second = v;
                found = true;
                break;
            }
            else if(v == pontos[j].first){
                pontos[j].first = u;
                found = true;
                break;
            }
        }
        if(!found){
            pontos.push_back({u, v});
        }
    }

    for(pair<int, int> ponto: pontos){
        cout << ponto.first << ' ' << ponto.second << endl;
    }


}