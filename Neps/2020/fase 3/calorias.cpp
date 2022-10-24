#include <iostream>

using namespace std;

int main(){
    int e1, e2, e3, x;

    cin >> e1 >> e2 >> e3 >> x;

    if((max(e1,e2)-min(e1,e2)) <= x){
        cout << e2 << endl;
    }

    else
        cout << e3 << endl;
}