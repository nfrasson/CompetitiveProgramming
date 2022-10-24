#include <iostream>
#include <set>

using namespace std;

int main(){
    int a, b, x, c1=0, c2=0; cin >> a >> b;
    set<int> s1;
    set<int> s2;


    for(int i = 0; i < a; i++){
        cin >> x;
        s1.insert(x);
    }

    for(int i = 0; i < b; i++){
        cin >> x;
        s2.insert(x);
    }

    for(auto it = s1.begin(); it!=s1.end(); ++it){
        if(s2.find(*it) == s2.end())
            c1++;
    }

    for(auto it = s2.begin(); it!=s2.end(); ++it){
        if(s1.find(*it) == s1.end())
            c2++;
    }
    
    cout << min(c1, c2) << endl;
}