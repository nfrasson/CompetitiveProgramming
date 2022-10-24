#include <iostream>
#include <set>

using namespace std;

int main(){
    int n, x, c=0; cin >> n;
    set<int> tacos;

    while(n--){
        cin >> x;

        if(tacos.find(x) == tacos.end()){
            c+=2;
            tacos.insert(x);
        }
        else{
            tacos.erase(x);
        }
    }

    cout << c << endl;
}