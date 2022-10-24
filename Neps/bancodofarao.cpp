#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;
vector<int> v(100010);
vector<int> t(4*100010);
pair<int, int> maior;

void build(int i, int l, int r){
    if(l == r){
        t[i] = v[l];
    }
    else{
        int m = (l+r)/2;

        build(2*i, l, m);
        build(2*i+1, m+1, r);

        t[i] = t[2*i] + t[2*i+1];
    }
}

int query(int i, int l, int r, int ql, int qr){
    if(ql <= l && qr >= r){
        if(t[i] == maior.first && r-l > maior.second || t[i] > maior.first){
            maior.first = t[i];
            maior.second = r-l;   
        }
    }

    if(qr < l || ql > r || l == r) return INT_MIN;

    int m = (l+r)/2;
    return query(2*i, l, m, ql, qr)
    + query(2*i+1, m+1, r, ql, qr);
}

int main(){
    int tt; cin >> tt;
    int n, q;
    int a, b;

    while(tt--){
        cin >> n;
        maior.first = INT_MIN;
        v.clear();

        for(int i = 1; i <= n; i++){
            cin >> v[i];
        } 

        build(1, 1, n);

        cin >> q;
        while(q--){
            cin >> a >> b;
            query(1, 1, n, a, b);
            cout << maior.first << ' ' << maior.second << endl;
        }
    }
}