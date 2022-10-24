#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

vector<pair<int ,int>> t(4*1000100);
vector<int> v[1000100];

void build(int i, int l, int r){
    if(l == r){
        t[i].first = v[l][0];
        t[i].second = v[l][0];
    }
    else{
        int m = (l+r)/2;

        build(2*i, l, m);
        build(2*i+1, m+1, r);

        t[i].first = max(t[2*i].first, t[2*i+1].first);
        t[i].second = min(t[2*i].second, t[2*i+1].second);
    }
}

pair<int, int> query(int i, int l, int r, int ql, int qr){
    if(ql <= l && qr >= r){
        return {t[i].first, t[i].second};
    }
    if(qr < l || ql > r) return {INT_MIN, INT_MAX};

    int m = (l+r)/2;

    pair<int, int> q1 = query(2*i, l, m, ql, qr);
    pair<int, int> q2 = query(2*i+1, m+1, r, ql, qr);

    return {max(q1.first, q2.first)
         ,min(q1.second, q2.second)};
}

int update(int i, int l, int r, int p, int x){
    if(l == r){
        t[i].first = max(t[i].first, x);
        t[i].second = min(t[i].second, x);
    }
    else{
        int m = (l+r)/2;

        if(p <= m) update(2*i, l, m, p, x); // se a posição dele for menor do que o meio, ele está para o filho esquerdo
        else update(2*i+1, m+1, r, p, x); // caso contrário, está para o filho direito

        t[i].first = max(t[2*i].first, t[2*i+1].first);
        t[i].second = min(t[2*i].second, t[2*i+1].second);
    }
}

int main(){
    int n, m; cin >> n >> m;
    int x;
    int op, a, b;

    for(int i = 1; i <= n; i++){
        cin >> x;
        v[i].push_back(x);
    }

    build(1, 1, n);

    while(m--){
        cin >> op >> a >> b;

        if(op == 1){
            update(1, 1, n, b, a);
        }
        else if(op == 2){
            pair<int,int> qr = query(1, 1, n, a, b);
            cout << qr.first - qr.second << endl;
        }
    }
}