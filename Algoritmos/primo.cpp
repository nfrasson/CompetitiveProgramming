#include <bits/stdc++.h>

using namespace std;

bool e_primo(int n){
    for(int i = 2; i*i<=n; i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main(){
    int x;
    cin >> x;
    cout << e_primo(x);
}