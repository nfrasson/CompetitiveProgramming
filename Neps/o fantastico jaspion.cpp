#include <iostream>
#include <map>
#include <sstream>  
#include <string>  

using namespace std;

int main(){
    int t; cin >> t;
    int m, n; 
    string s, x, tmp;
    map<string, string> M;

    while(t--){
        cin >> m >> n;
        for(int i = 0; i < m; i++){
            cin >> s >> x;
            M[s]=x;
        }

        for(int i = 0; i < n; i++){
            getline(cin, s);
            stringstream X(s); // X is an object of stringstream that references the S string

            while(getline(X, tmp, ' ')){
                cout << tmp << endl;
            } 
        }
    }
}