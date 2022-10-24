#include <iostream>
#include <stack>

using namespace std;

int main(){
	int n; cin >> n;
	string frase;

	while(n--){
		cin >> frase;

		stack <char> pa;
        stack <char> ca;
        stack <char> oa;

        bool valido = true;

		for(char i: frase){
            if(i == '(')
                pa.push(i);

            else if(i == ')'){
                if(pa.empty()){
                    valido = false;
                    break;
                }
                pa.pop();
            }

            else if(i == '{')
                ca.push(i);

            else if(i == '}'){
                if(ca.empty()){
                    valido = false;
                    break;
                }
                ca.pop();
            }

            else if(i == '[')
                oa.push(i);

            else if(i ==  ']'){
                if(oa.empty()){
                    valido = false;
                    break;
                }
                oa.pop();
            }
		}
		if(!ca.empty() || !pa.empty() || !oa.empty() || !valido){
			cout << 'N' << endl;
		}
		else{
			cout << 'S' << endl;
		}
	}
}
