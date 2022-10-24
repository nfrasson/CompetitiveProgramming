#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int t; cin >> t;
	ll n, q, k;
	
	while(t--){
		cin >> n >> q;
		
		vector<ll> v(n);
        vector<ll> total(n);
        vector<ll> maior(n, -1);
		
		for(int i = 0; i < n; i++){
			cin >> v[i];
            if(i == 0){
                total[i] = v[i];
                maior[i] = v[i];
            } else{
                total[i] = v[i] + v[i-1];
                maior[i] = max(maior[i-1], v[i]);
            }
		}
		
		while(q--){
			cin >> k;

            auto it = upper_bound(maior.begin(), maior.end(), k);
			
            if(it == maior.end()){
                cout << total[n-1] << endl;
            } else{
                cout << total[it-total.begin()-1] << endl; 
            }
			/*for(int i = 0; i < n; i++){
				if(v[i] > k){
					cout << total << ' ';
					break;
				}
				total += v[i];
				if(i == n-1) cout << total << ' ';
			}*/	
		
		}
		
		cout << endl;
	}
}
