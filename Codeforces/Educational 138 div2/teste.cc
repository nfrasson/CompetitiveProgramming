#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v = {0, 4, 5, 11, 11, 20};

    cout << v[2] << endl;
    v.erase(v.begin()+2);
    cout<<v[2]<<endl;
}