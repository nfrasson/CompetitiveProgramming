#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, x, clk=0;
    cin >> n;
    vector<int> v(n);

    while(n!=0){
        v.resize(n);
        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }
        for(int i = 1; i <= n; i++){
            if(v[i]==i){
                cout << "Teste " << ++clk << endl;
                cout << i << endl;
                break;
            }
        }

        cin >> n;
    }
}