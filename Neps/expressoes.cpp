#include <iostream>
#include <stack>

using namespace std;

int main(){
	int n; cin >> n;
	string frase;
    stack <char> pa;
	stack <char> ca;
	stack <char> oa;
	
	while(n--){
		cin >> frase;
		
		for(char i: frase){
			switch(i){
				case '(':
					pa.push(i);
				case ')':
					if(pa.empty()){
						cout << 'N' << endl;
						break;
					}
					pa.pop();
				case '{':
					ca.push(i);
				case '}':
					if(ca.empty()){
						cout << 'N' << endl;
						break;
					}
					ca.pop();
				case '[':
					oa.push(i);
				case ']':
					if(oa.empty()){
						cout << 'N' << endl;
						break;
					}
					oa.pop();
			}
		}
		if(!ca.empty() || !pa.empty() || !oa.empty()){
			cout << 'N' << endl;
		}
		else{
			cout << 'S' << endl;
		}
	}
}
