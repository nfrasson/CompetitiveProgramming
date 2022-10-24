#include <iostream>

using namespace std;

int main(){
    int t; cin >> t;
    int x;

    while(t--){
        cin >> x;

        if(x <= 300)
            cout << 3000 << endl;
        else 
             cout << x * 10 << endl;
    }
}