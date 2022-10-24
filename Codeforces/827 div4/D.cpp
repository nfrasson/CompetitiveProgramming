#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

int main(){
	int t; cin >> t;
	int n, tmp, maior;
	vector<int> v;
	
	while(t--){
		cin >> n;
		maior = INT_MIN;
		
		v.clear(); v.resize(n);
		
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		
		for(int i = n-1; i >= 0; i--){
			for(int j = i; j >= 0; j--){
				if(__gcd(v[i], v[j]) == 1)
					maior = max(maior, i+j);
			}
		}
		if(maior == INT_MIN) cout << -1 << endl;
		else cout << maior+2 << endl;
	}
	
}
