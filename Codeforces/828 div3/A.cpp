#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    int n;
    string s;

    while(t--){
        cin >> n;
        map<int, char> m;
        vector<int> v(n);
        bool found = false;
        
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        cin >> s;
        for(int i = 0; i < n; i++){
            if(m.find(v[i]) == m.end()){
                m[v[i]] = s[i];
            }
            else if(m[v[i]] != s[i]){
                found = true;
                break;
            }
        }
        if(found){
            cout << "NO" << endl;
        } else{
            cout << "YES" << endl;
        }
    }
    

    
}