#include <bits/stdc++.h>

using namespace std;


int main(){
    long long c, n, x, y; cin >> c >> n;
    map<long long, long long> m;
    map<long long, long long> ans;
    vector<long long> programas;

    for(int i = 0; i < c; i++){
        cin >> x >> y;
        m[x] = y;
    }

    for(int i = 0; i < n; i++){
        cin >> x >> y;

        if(ans.find(x) == ans.end()){
            ans[x] = y;
            programas.push_back(x);
        } 
        else ans[x] = max(ans[x], y);
    }

    for(int programa: programas){
        if(ans[programa] > m[programa])
            cout << programa << ' ' << ans[programa] << endl;
    }
	return 0;
}