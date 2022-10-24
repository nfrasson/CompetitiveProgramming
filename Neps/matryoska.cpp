#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector<int> v(n);
    vector<int> v1(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
        v1[i] = v[i];
    }

    sort(v1.begin(), v1.end());

    vector<int> errados;

    for(int i = 0; i < n; i++){
        if(v[i] != v1[i]){
            errados.push_back(v[i]);
        }
    }

    cout << errados.size() << endl;
    sort(errados.begin(), errados.end());
    for(int i: errados){
        cout << i << ' ';
    }
    return 0;
}