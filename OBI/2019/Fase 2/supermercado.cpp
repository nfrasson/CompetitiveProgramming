#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

int main(){
	int t; cin >> t;
	float pc, ps, menor=INF; 
	
	while(t--){
		cin >> pc >> ps;
		
		menor = min(menor, pc*(1000/ps));
	}
	
	cout << fixed << setprecision(2) << menor << endl;
}