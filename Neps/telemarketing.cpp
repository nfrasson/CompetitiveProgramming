#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int main(){
    int n, l; cin >> n >> l;
    int t;
    priority_queue<pii> atendentes;
    vector<int> ligacoes(n+1, 0);

    for(int i = 1; i <= n; i++){
        atendentes.push({0, -i});
    }

    while(l--){
        cin >> t;
        pii tmp = atendentes.top();
        tmp.first = -t;
        ligacoes[-tmp.second]++;

        atendentes.pop();
        atendentes.push(tmp);
    }
    for (int i = 1; i <= n; i++){
        cout << i << ' ' << ligacoes[i] << endl;
    }
    
}