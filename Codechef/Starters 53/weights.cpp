#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin >> t;
    int w, x, y, z, total;
    bool is_possible;

    while(t--){
        vector<int> weights(3);
        cin >> w >> x >> y >> z;
        total = x+y+z;

        if(x == w || y == w || z == w){
            cout << "YES" << endl;
        }
        else if(total == w || (x+y) == w || (x+z) == w || (y+z) == w){
            cout << "YES" << endl;
        } 
        else{
            cout << "NO" << endl;
        }
    }
}