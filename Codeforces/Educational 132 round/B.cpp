#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, s, t, ans;

    cin >> n >> m;

    vector<int> v(n+1);

    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }

    while(m--){
        cin >> s >> t;

        ans=0;
        if(s < t){
            for(int i = s; i < t; i++){
                cout << v[i] << ' ';
                if(v[i] > v[i+1])
                    ans+= (v[i]-v[i+1]);
            }
        }
        else if(s > t){
            for(int i = t; i > s; i--){
                cout << v[i] << ' ';
                if(v[i] > v[i-1])
                    ans+= (v[i]-v[i-1]);
            }
        }       
        cout << ans << endl;
    }
}