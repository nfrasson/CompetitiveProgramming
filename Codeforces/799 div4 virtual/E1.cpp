#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> lastIndexOf(1000010, -1);

int main(){
    int t; cin >> t;

    while(t--){
        ll n, s; cin >> n >> s;

        vector<ll> v(n);
        vector<ll> acumulado(n);

        for(ll i = 0; i < n; i++){
            cin >> v[i];
            if(i == 0) acumulado[i] = v[i];
            else acumulado[i] = acumulado[i-1]+v[i];
            lastIndexOf[acumulado[i]] = i;
        }
        
        if(acumulado[n-1] < s){
            cout << -1 << endl;
            continue;
        }
        if(acumulado[n-1] == s){
            cout << 0 << endl;
            continue;
        }

        ll maior = -1;
        for(ll l = 0; l < n; l++){
            ll find = l == 0 ? s : s+acumulado[l-1];

            if(lastIndexOf[find] > l){
                maior = max(maior, lastIndexOf[find]-l+1);
            }
        }
        cout << n-maior << endl;
    }

}