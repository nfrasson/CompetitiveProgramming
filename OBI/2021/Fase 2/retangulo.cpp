#include <iostream>

using namespace std;

int verifica[10000010];


int main(){
    int n, x, count=0; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        if(verifica[x] == 1)
            count++;
        else if(verifica[x] == 0)
            verifica[x]++;
        if(count == 2){
            cout << 'S' << endl;
            return 0;
        }
    }
    cout << 'N' << endl;
}