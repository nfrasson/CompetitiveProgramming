#include <iostream>

using namespace std;

int main(){
    int t; cin >> t;
    int a, b, c, d; 

    while(t--){
        cin >> a >> b >> c >> d;

        if((a-c) < (b-d))
            cout << "First" << endl;
        else if((a-c) > (b-d))
            cout << "Second" << endl;
        else    
            cout << "Any" << endl;
    }
}