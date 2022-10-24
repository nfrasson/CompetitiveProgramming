#include <bits/stdc++.h>

using namespace std;

vector<int> fk(10010, -1);
vector<int> mult(10010, -1);
vector<int> v(10010);

int recursao(int n, int m, int k, int i){
    if(fk[k-i] == -1){
        return fk[k-1];
    }
    else{
        return fk[k-1]
    }
}


int main(){
    int n, k, m; cin >> n >> k >> m;
    

    for(int i = 1; i <= n; i++){
        cin >> v[i];
        if(i == 1) mult[i] = v[i];
        else mult[i] = v[i-1]*v[i];
    }
    for(int i = 0; i < n; i++){
        cin >> fk[i];
    }
    if(fk[k] != -1){
        cout << f[k] << endl;
    }else{
        cout << recursao(n, m, k, 1);
    }
}