#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;
#define PB push_back

int main(){
	 ios::sync_with_stdio(0);
	 cin.tie(0); cout.tie(0);
	 
	 int t; cin >> t;
	 int n, ans, j, k;
	 vector<int> v(n);
	 
	 while(t--){
	 	cin >> n;
	 	v.clear();
	 	v.resize(n+1);
	 	ans = 0;
	 	
	 	for(int i = 0; i < n; i++) cin >> v[i];
	 	
	 	for(int i = 0; i < n; i++){
	 		j = i;
	 		k = 1;
	 		while(v[j]-k >= 0 && j < n){
	 			j++; k++; ans++;
	 		}
	 	}
	 	
	 	cout << ans << endl;
	 }
}
