#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    int a, b;

    while(t--){
        int ans = 0;
        cin >> a;

        for(int i = 0; i < 3; i++){
            cin >> b;
            if(b > a) ans++;
        }
        cout << ans << endl;
    }
    
}