#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int main(){
    int n; cin >> n;
    int count=0, x, y;
    vector<pii> v(n);
    vector<bool> deleted(n, false);

    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    int ans = n;
    for(int i = 0; i < n; i++){
        if(deleted[i]) continue;
        for(int j = i+1; j < n; j++){
            if(deleted[i]) continue;
            if(v[j].first > v[i].first && v[j].first < v[i].second){
                ans--;
                deleted[j] = true;
                break;
            }
            else if(v[j].second < v[i].second && v[j].second > v[i].first){
                ans--;
                deleted[j] = true;
                break;
            }
        }
    }
    cout << ans << endl;
}