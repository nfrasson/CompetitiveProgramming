#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	long long n, q, k, total;
	vector<int> v;
	
	while(t--){
		cin >> n >> q;
		
		v.clear(); v.resize(n);
		
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		
		while(q--){
			cin >> k;
			total = 0;
			
			for(int i = 0; i < n; i++){
				if(v[i] > k){
					cout << total << ' ';
					break;
				}
				total += v[i];
				if(i == n-1) cout << total << ' ';
			}	
		
		}
		
		cout << endl;
	}
}
