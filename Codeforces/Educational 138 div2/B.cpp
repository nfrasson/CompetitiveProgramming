#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;

int main(){
    ll t; cin >> t;
    ll n;

    while(t--){
        cin >> n;
        ll ans=0;
        vector<pair<pii, ll>> monsters(n);
        vector<pair<pii, ll>> backup(n);
        vector<bool> removidos(n, false);
        
        for(int i = 0; i <n; i++){
            cin >> monsters[i].first.second;
            monsters[i].second = i;
            backup[i].first.second = monsters[i].first.second;
            backup[i].second = i;
        }
        for(int i = 0; i<n; i++){
            cin >> monsters[i].first.first;
            backup[i].first.first = monsters[i].first.first;
        }

        sort(monsters.begin(), monsters.end());

        for(int i = 0; i < n; i++){
            ll j = monsters[i].second;
            ans+=backup[j].first.second;
            removidos[j] = true;
            ll proximo = j+1;
            ll anterior = j-1;
            if(proximo<n){
                while(removidos[proximo]) proximo++;

                if(proximo<n){
                    backup[proximo].first.second+=monsters[i].first.first;
                }
            }
            if(anterior>=0){
                while(removidos[anterior]) anterior--;

                if(anterior>=0){
                    backup[anterior].first.second+=monsters[i].first.first;
                }
            }
        }
        cout << ans << endl;
    }
}