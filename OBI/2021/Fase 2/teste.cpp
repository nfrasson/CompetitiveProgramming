#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v(3);
    
    v[0]=2;
    v[1]=3;
    v[2]=4;

    v.erase(v.begin()+1);

    for(int i: v)
        cout << i << ' ';
    cout << v[1];
}