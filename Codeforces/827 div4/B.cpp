#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	int n, tmp;
	
	while(t--){
		cin >> n;
		set<int> s;
		
		for(int i = 0; i < n; i++){
			cin >> tmp;
			s.insert(tmp);
		}
		
		if(s.size() != n) cout << "NO" << endl;
		else cout << "YES" << endl;
	}

}
