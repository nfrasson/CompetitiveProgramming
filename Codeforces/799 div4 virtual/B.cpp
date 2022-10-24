#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    int n;

    while(t--){
        cin >> n;
        int x;
        int ans = 0;   
        vector<int> vistos(100010, 0);
        vector<int> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
            vistos[v[i]]++;
        }

        int ans = n;

        
    }

}