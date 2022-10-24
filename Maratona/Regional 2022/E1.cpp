#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, x; cin >> n;
	vector<int> v(n);
	vector<pair<int, int>> s;
	vector<bool> estourados(100010, false);

	for(int i = 0; i < n; i++){
		cin >> x;
		v[i] = x;
		s.push_back({v[i], i});
	}

	sort(s.begin(), s.end(), greater<pair<int, int>>());

	int count = 0, flechas=0;
	// Fazer uma busca binaria por v[i]-1 (entre i+1 e v.size()) e excluir o item dessa posição
	//
	for(pair<int, int> tmp: s){
		int alt = tmp.first, i = tmp.second;
		if(count == n) break;
		if(estourados[i]) continue;
		
		bool found = true;
		estourados[i] = true;
		while(found){
			for(int j = i; j < n; j++){
				if(v[j] == alt-1){
					count++;
					estourados[j] = true;
					alt = v[j];
					i = j;
					break;
				}
				if(j == n-1) found = false;
			}
			if(i == tmp.second) break;
		}
		flechas++;
	}

	cout << flechas << endl;
}
