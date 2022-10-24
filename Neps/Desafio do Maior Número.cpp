#include <iostream>

using namespace std;

int main(){
	int n, mx=0;
	cin >> n;
	
	while(n!=0){
		mx = max(mx, n);	
		cin >> n;
	}
	
	cout << mx << endl;
}