#include <iostream>

using namespace std;

const int N = 10000010;

int t[4*N];

int a[N]; // --> Array de elementos passado pelo problema

void build(int i, int l, int r){
    if(l == r){
        t[i] = a[l];
    } else{
        int m = (l+r)/2;
        
        build(2*i, l, m);
        build(2*i+1, m+1, r);
        t[i] = t[2*i] + t[2*i+1];
    }
}

// QUERY EM UM INTERVALO E UPDATE EM UM PONTO

// i == posição do nó atual
// l == inicio do espaço atual e r == final desse espaço
// ql == inicio do espaço procurado e qr == final do espaço procurado
int query(int i, int l, int r, int ql, int qr){
    if(ql <= l && qr >= r) return t[i]; // Se o espaço procurado está totalmente dentro do espaço atual

    if(qr < l || ql > r) return 0; // Se o espaço procurado está totalmente fora do espaço atual

    int m = (l+r)/2;

    return query(2*i, l, m, ql, qr);
         + query(2*i+1, m+1, r, ql, qr);
}

// i == posição do nó atual
// l == inicio do espaço atual e r == final desse espaço
// p == posição de um elemento ???
// x == valor a ser atualizado
void update(int i, int l, int r, int p, int x){
    if(l == r) // chegamos na folha
        t[i] = x;
    else{
        int m = (l+r)/2;

        if(p <= m) update(2*i, l, m, p, x); // se a posição dele for menor do que o meio, ele está para o filho esquerdo
        else update(2*i+1, m+1, r, p, x); // caso contrário, está para o filho direito

        t[i] = t[2*i] + t[2*i+1];
    }
}

int main(){
    return 0;
}