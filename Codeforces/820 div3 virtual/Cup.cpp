#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t; 
	string s;
	
	while(t--){
		cin >> s;
		vector<int> v[26];
		int j = 0;
		
		for(char i: s){
			v[i - 'a'].push_back(j);
			j++;
		}
		
		int direction = 1;
		
		if(s[0] > s[int(s.size())-1]) direction = -1;
		
		for(int i = s[0]-'a'; i != s[int(s.size())-1]; i += direction){
			
		}
	}
}

