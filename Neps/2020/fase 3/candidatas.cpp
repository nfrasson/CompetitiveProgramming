#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

vector<int> v;

const INF = 0x3f3f3f3f;

int mdc(int ini, int fim){
    int minimo = INF;
    for(int i = ini; i < fim; i++){
        minimo = min(minimo, v[i]);
    }

    for(int i = minimo; i > 0; i--){
        for(int j = ini; j < fim; j++){
            if(v[j] % i != 0)
                break;
            else
                return i;
        }
    }

}

int main(){
    int n, m; cin >> n >> m;
    v.resize(n);
    int op;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < m; i++){
        cin >> op;

        if(op == 1){
            int I, V; cin >> I >> V;
            v[I] = V;
        }

        else if(op == 2){
            int e, d; cin >> e >> d;
            if()

        }
    }

}