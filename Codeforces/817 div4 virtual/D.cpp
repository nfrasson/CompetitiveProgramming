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
        

        for(ll i = 0; i < n; i++){
            ll ans = 0;
            for(ll j = ultimo_i; j < n; j++){
                ll maior = max(j, n-1-j);

                if(maior == j && s[j] != 'L' && maior != n-1-j){
                    s[j] = 'L';
                    ultimo_i=j;
                    break;
                }
                else if(maior == n-1-j && s[j] != 'R' && maior != j){
                    s[j] = 'R';
                    ultimo_i=j;
                    break;
                }
            }

            for(ll i = 0; i < n; i++){
                if(s[i] == 'L')
                    ans += i;
                else
                    ans += n-i-1;
            }
            cout << ans << ' ';
        }
        cout << endl;
    }
}