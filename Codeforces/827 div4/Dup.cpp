#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

typedef pair<int, int> pii;

int main(){
	int t; cin >> t;
	int n, tmp, maior;
	
	
	while(t--){
		cin >> n;
		maior = INT_MIN;
		
		vector<int> v(n);
        vector<int> valores;
        vector<bool> found(1001, false);
        map<int, int> maiores;
		
		for(int i = 0; i < n; i++){
			cin >> v[i];
            if(!found[v[i]]){
                found[v[i]] = true;
                valores.push_back(v[i]);
            }
            if(maiores.find(v[i]) == maiores.end() || i > maiores[v[i]]){
                maiores[v[i]] = i;
            }
		}
        sort(valores.begin(), valores.end(), greater<int>());

        for(int i: valores){
            for(int j: valores){
                if(__gcd(i, j) == 1){
                    maior = max(maior, maiores[i] + maiores[j]);
                }
            }
        }
        
		if(maior == INT_MIN) cout << -1 << endl;
		else cout << maior+2 << endl;
	}
	
}
