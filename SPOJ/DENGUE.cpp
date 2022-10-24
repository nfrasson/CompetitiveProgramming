#include <bits/stdc++.h>

using namespace std;

vector<int> adj[102];
vector<int> dist(102);
int max_dist = INT_MIN;

void dfs(int vertice){
    for(int tmp: adj[vertice]){
        if(dist[tmp] != -1) continue;
        dist[tmp] = dist[vertice] + 1;
        dfs(tmp);
    }
    max_dist = (dist[vertice] > max_dist) ? dist[vertice] : max_dist;
}

int main(){
    int n, x, y, ans, clk=0;
    cin >> n;

    while(n!=0){
        for(int i = 0; i < n-1; i++){
            cin >> x >> y;
            
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int last_dist = INT_MAX;
        for(int i = 1; i <= n; i++){
            max_dist=INT_MIN;
            for(int j = 1; j <= n; j++) dist[j] = -1;
            dist[i]=0;
            dfs(i);
            if(last_dist > max_dist){
                ans = i;
                last_dist = max_dist;
            }
        }

        cout << "Teste " << ++clk << endl;
        cout << ans << endl;
        for(int i = 1; i <= n; i++) adj[i].clear();
        cin >> n;
    }
}