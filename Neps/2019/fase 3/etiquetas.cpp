#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k, c; cin >> n >> k >> c;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    if(k*c >= n){
        cout << 0 << endl;
        return 0;
    }

    vector<int> acumulado;

    for(int i = 0; i < n-3; i++){
        acumulado.push_back(v[i]+v[i+1]+v[i+2]);
    }

    sort(acumulado.begin(), acumulado.end());

    for(int i: acumulado){
        cout << i << ' ';
    }

}