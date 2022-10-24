#include <bits/stdc++.h>

using namespace std;

vector<int> pai(100010);
vector<int> pontos(100010, 0);
vector<int> peso(100010);

int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int x, int y){
    x = find(x);
    y = find(y);

    if(x == y) return;

    if(peso[x] < peso[y]){
        pai[x] = y;
        pontos[y] += pontos[x];
        pontos[x] = 0;
    } 
    else if(peso[x] > peso[y]){
        pai[y] = x;
        pontos[x] += pontos[y];
        pontos[y] = 0;
    } 
    if(peso[x] == peso[y]){
        pai[x] = y;
        peso[y]++;
        pontos[y] += pontos[x];
        pontos[x] = 0;
    }
}

int main(){
    int n, m; cin >> n >> m;
    
    while(n!=0 && m != 0){
        int ans=0;
        for(int i = 1; i <= n; i++){
            cin >> pontos[i];
            pai[i] = i;
        }

        int q, a, b;
        while(m--){
            cin >> q >> a >> b;

            if(q == 1){
                join(a, b);
            }
            else{
                a = find(a);
                b = find(b);
                if(pontos[a] > pontos[b]){
                    if(a == find(1))  ans++;
                }
                else if(pontos[a] < pontos[b]){
                    if(b == find(1)) ans++;
                }
            }
        }
        cout << ans << endl;
        cin >> n >> m;
    }
}