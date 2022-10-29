#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

pii dif(pii a, pii b){
    int ans = 0;
    
    if(a.first > b.first){
        ans = (60*(a.first-b.first)) + (a.second-b.second);
    }
    else{
        ans = (60*((24-b.first)+a.first)) + (a.second-b.second);
    }

    return {ans/60, ans%60};
    
}

int main(){
    int t; cin >> t;

    while(t--){
        int n; 
        pii h, x, ans;
        
        vector<pii> v(n);

        cin >> n >> h.first >> h.second;


        for(int i = 0; i < n; i++){
            cin >> x.first >> x.second;
            v[i] = x;
        }

        sort(v.begin(), v.begin()+n);

        for(int i = 0; i < n; i++){
            if(v[i].first == h.first && v[i].second == h.second){
                if(i == n-1){
                    ans = dif(v[0], h);
                    cout << ans.first << ' ' << ans.second << endl;
                    break;
                }
                else{
                    if(v[i+1].first == h.first && v[i+1].second == h.second){
                        cout << 0 << ' ' << 0 << endl;
                        break;
                    }
                    else{
                        ans = dif(v[i+1], h);
                        cout << ans.first << ' ' << ans.second << endl;
                        break;    
                    }
                }
            }
        }
    }
}