#include <iostream>
#include <map>

using namespace std;

#define ll long long

int main(){
    int c, n, x, y; cin >> c >> n;
    map<ll, ll> m;

    for(ll i = 0; i < c; i++){
        cin >> x >> y;
        m[x] = y;
    }

    for(ll i = 0; i < n; i++){
        cin >> x >> y;

        if(m.find(x) != m.end()){
            if(m[x] < y)
                cout << x << ' ' << y;
        }
    }
}