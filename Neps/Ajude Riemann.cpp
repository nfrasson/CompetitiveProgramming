#include <iostream>

using namespace std;

bool e_composto [12000010];

void crivo(){
    e_composto[1] = true;
    for(int i = 2; i <= 12000000; i++){
        if(!e_composto[i]){
            for(int j = 2; j*i <= 12000000; j++)
                e_composto[j*i] = true;
        }
    }
}

int main(){
    int n, c=0; cin >> n;
    crivo();

    for(int i = 2; i <= 12000000; i++){
        if(!e_composto[i])
            c++;
        if(c == n){
            cout << i << endl;
            break;
        }
    }

}