#include <iostream>

using namespace std;

bool e_composto[10000100];

void crivo(int n){
    e_composto[1] = true;
    for(int i = 2; i <= n; i++){
        if(!e_composto[i]){
            for(int j = 2; j*i <= n; j++){
                e_composto[j*i] = true;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    crivo(n);
    for(int i = 2; i <= n; i++)
        if(!e_composto[i]) cout << i << ' ';
}
