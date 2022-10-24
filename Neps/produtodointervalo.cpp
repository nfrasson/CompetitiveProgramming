#include <iostream>
#include <vector>

using namespace std;

const int N = 1000010;

vector<int> t;
vector<int> v;

int valor(int a)
{
    return (a > 0? 1 : (a < 0 ? -1 : 0));
}

void build(int i, int l, int r){
    if(l == r){
        t[i] = valor(v[l-1]);
    } else{
        int m = (l+r)/2;

        build(2*i, l, m);
        build(2*i+1, m+1, r);
        t[i] = t[2*i] * t[2*i+1];   
    }
}

void update(int i, int l, int r, int p, int x){
    if (p > r || p < l) return;

    if(l == r && r == p){
        t[i] = valor(x);
        return;
    } else{
        int m = (l+r)/2;

        update(2*i, l, m, p, x);
        update(2*i+1, m+1, r, p, x);

        t[i] = t[2*i] * t[2*i+1];
    }
}

int query(int i, int l, int r, int ql, int qr){
    if(ql <= l && qr >= r)
        return t[i];
    if(qr < l || ql > r) return 1;
    
    int m = (l+r)/2;

    return query(2*i, l, m, ql, qr)
         * query(2*i+1, m+1, r, ql, qr);
}

int main(){
    int n, k;
    while(cin >> n >> k){
        char c;
        int i, j;
        t.resize(n*4);
        v.resize(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        build(1, 1, n);

        while(k--){
            cin >> c >> i >> j;

            if(c == 'C'){
                update(1, 1, n, i, j);
            }
            else if(c == 'P'){
                int ans = query(1, 1, n, i, j);
                if(ans == 0) cout << '0';
                else if(ans < 0) cout << '-';
                else if(ans > 0) cout << '+';
            }
        }
        cout << endl;
    }
}