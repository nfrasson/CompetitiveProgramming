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
        int a, b, maior = INT_MIN;
        
        for(int i = 0; i <n; i++){
            cin >> a;
            ans+=a;
        }
        for(int i = 0; i<n; i++){
            cin >> b;
            ans+=b;

            maior = max(maior, b);
        }

        ans -= maior; 
        
        cout << ans << endl;
    }
}