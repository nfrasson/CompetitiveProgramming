#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    set<int> v;
    vector<int> removidos;
    int ti;

    for(int i = 1; i <= n; i++){
        v.insert(i);
    }
    for(int i = 0; i < m; i++){
        cin >> ti;
        int aux=1;
        while(ti*aux <= n){
            if(v.find(ti*aux) != v.end()){
                v.erase(ti*aux);
                removidos.push_back(ti*aux);
            }   
            aux++;
        }
    }

    for(int i: removidos){
        cout << i << endl;
    }
}