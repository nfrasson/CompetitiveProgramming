#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	int a, b, c;
	
	while(t--){
		cin >> a >> b >> c;
		
		b = max(b, c)-min(b,c);
		c += b;
		
		if(c == a) cout << 3 << endl;
		else if(c < a) cout << 2 << endl;
		else if(c > a) cout << 1 << endl;
		
	}
	
}
