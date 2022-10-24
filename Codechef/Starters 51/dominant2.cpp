#include <iostream>
#include <vector>
#include <limits.h>
#include <set>

using namespace std;

int main(){
    int t; cin >> t;
    int n, x, maior, c;

    while(t--){
        cin >> n;
        vector<int> v(1010, 0);
        set<int> items;

        for(int i = 0; i < n; i++){
            cin >> x;
            items.insert(x);
            v[x]++;
        }

        maior = INT_MIN;
        c=1;

        for(int i: items){
            if(v[i] == maior)
                c++;
            else
                if (v[i] > maior){
                    maior = v[i];
                    c=1;
                }
        }

        if(c == 1)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
}