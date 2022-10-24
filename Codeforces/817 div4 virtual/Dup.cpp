#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    ll n;
    string s;

    while(t--){
        cin >> n;
        cin >> s;
        ll ultimo_i = 0;
        priority_queue<pii> options;

        for(ll i = 0; i < n; i++){
            ll maior = max(i, n-i-1);
            ll x;
            if(s[i] == 'L') x = i;
            else x = n-i-1;

            options.push({maior-x, i});
        }

        ll ans = 0;

        for(ll i = 0; i < n; i++){
            if(s[i] == 'L')
                ans += i;
            else
                ans += n-i-1;
        }

        for(ll i = 0; i < n; i++){
            if(!options.empty()){
                ans += options.top().first;

                if(options.top().first == options.top().second)
                    s[options.top().second] = 'L';
                else
                    s[options.top().second] = 'R';
                
                options.pop();
            }

            cout << ans << ' ';

            
        }
        cout << endl;
    }
}