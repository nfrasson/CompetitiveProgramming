#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	//cout << char('a' + 3 - 1) << endl;
	//cout << stoi("23");
	
	int t; cin >> t;
	int n;
	string s;
	
	while(t--){
		cin >> n >> s;
		string tmp = "";
		
		
		for(int i = 0; i < n; i++){
			tmp = "";
			if(i <= n-3){
				if(s[i+2] == '0'){
					if(i > n-4 || i <= n-4 && s[i+3] != '0'){
						tmp.push_back(s[i]);
						tmp.push_back(s[i+1]);
						cout << char('a' + stoi(tmp) - 1);
						i+=2;
						continue;
					}
				}
			}
			tmp.push_back(s[i]);
			cout << char('a' + stoi(tmp) - 1);
		}
		cout << endl;
	}	
}
