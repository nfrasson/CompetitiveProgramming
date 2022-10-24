#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1e5 + 5;

vector<int> adj[MAX];
vector<bool> visitados(MAX);

bool dfs(int v){
    visitados[v] = true;
    int tam=-MAX, c=0;
    for(int x: adj[v]){
        c=0;
        if(!visitados[x]){
            visitados[x]=true;

            for(int j: adj[x]) c++;

            if(tam == -MAX) 
                tam = c;
            else
                if(tam != c)
                    return false;
        }
    }
    return true;
}

int main(){
    int n, a, b; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i = 0; i <= n; i++){
        if(!dfs(i)){
            cout << "mal" << endl;
            return 0;
        }
    }
    cout << "bem" << endl;
}