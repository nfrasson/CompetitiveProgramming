#include <bits/stdc++.h>

using namespace std;

int n, c;
vector<int> v;

bool valido(int i){
    return i >= 0 && i < n;
}

void operacao(int i, int j){
    if(valido(i+1) && (v[i+1] + v[i]) == v[j]){
        v[i] += v[i+1];
        v.erase(v.begin()+i+1);
        c++;
        n--;
    }
    else if(valido(j-1) && v[i] == (v[j-1] + v[j])){
        v[j] += v[j-1];
        v.erase(v.begin()+j-1);
        c++;
        n--;
    }
    else{
        v[i] += v[i+1];
        v[j] += v[j-1];
        v.erase(v.begin()+j-1);
        v.erase(v.begin()+i+1);
        c+=2;
        n-=2;
    }
}

void e_palindromo(){
    int meio;
    if(n%2==0)
        meio = n/2;
    else    
        meio = (n+1)/2;
    for(int i = 0; i < meio; i++){
        if(v[i] != v[n-i-1]){
            operacao(i, n-i-1);
            e_palindromo();
            break;
        }
    }
}

int main(){
    c = 0;
    cin >> n;
    v.resize(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    e_palindromo();
    cout << c << endl;
}