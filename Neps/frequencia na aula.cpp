#include <iostream>
#include <set>

using namespace std;

int main(){
    int n, x, c=0; cin >> n;
    set<int> s;

    while(n--){
        cin >> x;
        s.insert(x);
    }
    for(auto it = s.begin(); it != s.end(); ++it){
        c++;
    }

    cout << c << endl;
}