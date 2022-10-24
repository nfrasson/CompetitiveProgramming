#include <bits/stdc++.h>

using namespace std;

vector<int> pai(100010);
vector<int> peso(100010);

int find(int x){
	if(pai[x] == x) return x;
	return pai[x]=find(pai[x]);
}

void join(int x, int y){
	x = find(x);
	y = find(y);
	
	if(x == y) return;
	
	if(peso[x] < peso[y]) pai[x] = y;
	if(peso[x] > peso[y]) pai[y] = x;
	if(peso[x] == peso[y]){
		pai[x] = y;
		peso[y]++;
	}
}

int main(){
    int n, k; cin >> n >> k;
	
	for(int i = 1; i<=n; i++){
		pai[i] = i;
	}
	
	char op; int a, b;
	
	while(k--){
		cin >> op >> a >> b;
		if(op == 'F') join(a, b);
		else{
			if(find(a) == find(b)) cout << 'S' << endl;
			else cout << 'N' << endl;
		}
	}

    return 0;
}
