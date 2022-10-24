#include <iostream>
#include <vector>

using namespace std;

vector<int> adj[1001];

int main(){
    int n, m; cin >> n >> m;
	int t, a, b;
	
	for(int i = 0; i < m; i++){
		cin >> t >> a >> b;
		if(t == 1){
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		else{
            bool found = false;
			for(int i = 0; i < int(adj[a].size()); i++){
				if(adj[a][i] == b){
					cout << 1 << endl;
					found = true;
                    break;
				}
			}	
            if(!found)
			    cout << 0 << endl;
		}
	}
}