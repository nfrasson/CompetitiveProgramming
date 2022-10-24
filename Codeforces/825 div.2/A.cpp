#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;
#define PB push_back

int main(){
	 ios::sync_with_stdio(0);
	 cin.tie(0); cout.tie(0);
	 
	 int t, n, ans, change;
	 int out_place;
	 cin >> t;
	 
	 while(t--){
		 cin >> n;
		 ans = 0; out_place=0;
		 
		 vector<int> a(n);
		 vector<int> an(2,0);
		 vector<int> b(n);
		 vector<int> bn(2,0);
		 
		 for(int i = 0; i < n; i++){
		 	cin >> a[i];
		 	if(a[i] == 0) an[0]++;
		 	else an[1]++;
		 }
		 for(int i = 0; i < n; i++){
		 	cin >> b[i];
		 	if(b[i] != a[i]) out_place++;
		 	if(b[i] == 0) bn[0]++;
		 	else bn[1]++;
	 	}
	 	
	 	if(an[1] > bn[1])
	 		ans+=an[1]-bn[1];
	 	else
	 		ans+=bn[1]-an[1];
	 	out_place -= ans;
	 	
	 	
	 	if(out_place > 0) ans++;
	 	
	 	cout << ans << endl;
	 }
}
