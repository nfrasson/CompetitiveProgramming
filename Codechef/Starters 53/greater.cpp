#include <iostream>

using namespace std;

int main(){
    int t; cin >> t;
    float a, b, c;

    while(t--){
        cin >> a >> b >> c;
        if((a+b)/2 > c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}