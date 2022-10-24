#include <iostream>

using namespace std;

int main(){
    int t; cin >> t;
    int x, y, z; 

    while(t--){
        cin >> x >> y >> z;
        cout << (x-y)+z << endl;
    }
}