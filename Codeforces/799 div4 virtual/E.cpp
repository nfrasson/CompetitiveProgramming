#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n, s; cin >> n >> s;
        vector<int> v(n);
        vector<int> direita(n);
        vector<int> esquerda(n);
        int ultimo1 = -1;
        int soma = 0;
        int ans = 0;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            soma+=v[i];
            if(v[i] == 1){
                esquerda[i]=-1;
                ultimo1 = i;
            }
             
            else esquerda[i] = ultimo1;
        }
        ultimo1 = -1;

        if(soma < s){
            cout << -1 << endl;
            continue;
        }
        if(soma == s){
            cout << 0 << endl;
            continue;
        }

        for(int i = n-1; i >= 0; i--){
            if(v[i] == 1){
                direita[i] = -1;
                ultimo1 = i;
            }
            else direita[i] = ultimo1;
        }

        int l = 0, r = n-1;
        for(int i = 0; i < n && soma != s; i++){
            if(v[l] == 1){
                soma--;
                ans++;
                l++;
            }
            else if(v[r] == 1){
                soma--;
                ans++;
                r--;
            }
            else{
                if(direita[l] == -1 && esquerda[r] == -1){
                    ans = -1;
                    break;
                }
                if(direita[l] == -1 || direita[l]-l > r-esquerda[r]){
                    ans+=(r-esquerda[r]+1);
                    soma--;
                    r = esquerda[r]-1;
                }
                else if(esquerda[r] == -1 || direita[l]-l < r-esquerda[r]){
                    ans += (direita[l]-l+1);
                    soma--;
                    l = direita[l]+1;
                }
            }
        }
        if(soma != s) cout << -1 << endl;
        else cout << ans << endl;
    }

}