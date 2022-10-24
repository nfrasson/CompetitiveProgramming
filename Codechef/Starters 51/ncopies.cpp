#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin >> t;
    int n, m;
    string x, final;
    int pref, suf, count;

    while(t--){
        count = 0;
        final = "";

        cin >> n >> m;
        cin >> x;
        for(int i = 0; i < m; i++)
            for(char i: x)
                final.push_back(i);

                         
        for(int i = 0; i < int(final.length()); i++){
            pref = 0;
            suf = 0;
            for(int j = 0; j < i; j++){
                pref+=(final[j] - '0');
            }
            for(int j = i; j < (n*m); j++){
                suf+=(final[j] - '0');
            }
            if(pref == suf) count++;
        }
        cout << count << endl;
    }
}