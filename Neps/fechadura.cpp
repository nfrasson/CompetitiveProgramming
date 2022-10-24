#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, ans=0; cin >> n >> m;
    vector<int> v(n, 0);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n; i++){
        if(i == n-1){
            ans+=max(v[i], m)-min(v[i], m);
        }
        else{
            int dif = m-v[i];
            v[i+1] += dif;
            if(dif < 0) ans+=(dif*-1);
            else ans+=dif;
        }
    }
    cout << ans << endl;
}