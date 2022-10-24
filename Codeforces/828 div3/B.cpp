#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t; cin >> t;
    ll n, q;
    ll type, x;

    while(t--){
        cin >> n >> q;
        vector<ll> v(n);
        ll even=0, en=0, odd=0, on=0;
        ll sum = 0;

        for(int i = 0; i < n; i++){
            cin >> v[i];

            if(v[i]%2 == 0){
                even+=v[i];
                en++;
            }
            else{
                odd+=v[i];
                on++;
            }    
        }

        while(q--){
            cin >> type >> x;
            sum = even + odd;

            if(type == 0){
                even += x*en;
                sum += x*en;
                
                if(x%2!=0){
                    odd += even;
                    on+=en;
                    even=0;
                    en = 0;
                }
            }
            else{
                odd += x*on;
                sum += x*on;
                
                if(x%2!=0){
                    even += odd;
                    en += on;
                    odd = 0;
                    on = 0;
                }
            }
            cout << sum << endl;
        }
    }
}