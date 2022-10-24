#include <bits/stdc++.h>

using namespace std;

int main(){
	set<pair<int, int>> s;
	
	s.insert({0, 1});
	s.insert({0, 2});
	
	for(set<pair<int, int>>::iterator it = s.begin(); it != s.end(); it++){
		pair<int, int> tmp = *it;
		cout << *s.find({0, 1});
		cout << tmp.first << tmp.second << endl;
	}
}
