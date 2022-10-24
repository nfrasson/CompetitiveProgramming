#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	
	char s[8][8], tmp;
	int count;
	bool found;
	
	while(t--){
		found = false;
		int r = 0, b = 0;
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				cin >> s[i][j];
			}
		}
		
		for(int i = 0; i < 8; i++){
			tmp = ' ';
			r = 0;
			for(int j = 0; j < 8; j++){
				if(s[i][j] == 'R') r++;
			}
			if(r == 8){
				found = true;
				cout << 'R' << endl;
				break;			
			}
		}
		
		if(!found){
			for(int i = 0; i < 8; i++){
				tmp = ' ';
				b = 0;
				for(int j = 0; j < 8; j++){
					if(s[j][i] == 'B')b++;
				}
				if(b == 8){
					found = true;
					cout << 'B' << endl;
					break;
				}
			}
		}
		
	}
}
