#include <iostream>
#include <vector>

using namespace std;

#define MX 1000001

vector<int> adj[MX];

int dfs(int islandA, int islandB){
    for(int island: adj[islandA]){
        if(island == islandB)
            return 1;
    }
    return 0;
}

int main(){
    int n, m, t, a, b;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        cin >> t >> a >> b;
        if(t == 0){
            cout << dfs(a, b) << endl;

        }
        else if(t == 1){
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
    }
}