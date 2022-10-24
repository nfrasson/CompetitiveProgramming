#include <iostream>

using namespace std;

const int N = 10000010;

int t[4*N];

int a[N]; // --> Array de elementos passado pelo problema

void build(int i, int l, int r, int ql, int qr){
    if(l == r){
        t[i] = a[l];
    }
}

// QUERY EM UM PONTO E UPDATE EM UM INTERVALO

// i == posição do nó atual
// l == inicio do espaço atual e r == final desse espaço
// ql == inicio do espaço procurado e qr == final do espaço procurado
// x == valor a ser somado no intervalo
void update(int i, int l, int r, int ql, int qr, int x){
    if(ql <= l && qr >= r){ // Se o espaço procurado está totalmente dentro do espaço atual
        t[i] += x;
        return;
    } 

    if(qr < l || ql > r) return; // Se o espaço procurado está totalmente fora do espaço atual

    int m = (l+r)/2;

    update(2*i, l, m, ql, qr, x);
    update(2*i+1, m+1, r, ql, qr, x);
}

// i == posição do nó atual
// l == inicio do espaço atual e r == final desse espaço
// p == posição do elemento
int query(int i, int l, int r, int p){
    if(l == r) return t[i];
    
    int m = (l+r)/2;

    if(p <= m){
        return t[i] + query(2*i, l, m, p);
    } else{
        return t[i] + query(2*i+1, m+1, r, p);
    }
}

int main(){
    return 0;
}