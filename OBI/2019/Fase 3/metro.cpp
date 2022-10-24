#include <iostream>
#include <vector>

using namespace std;

const int MX = 10^5;

vector<int> adj_cir[MX];
vector<int> adj_qua[MX];

void dfs(int x, int y){

}

int main(){
    int n, m;
    int a, b;
    cin >> n >> m;

    for(int i = 0; i < n-1; i++){
        cin >> a >> b;

        adj_cir[a].push_back(b);
        adj_cir[b].push_back(a);
    }
    for(int i = 0; i < m-1; i++){
        cin >> a >> b;

        adj_qua[a].push_back(b);
        adj_qua[b].push_back(a);
    }

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){

        }
    }
}