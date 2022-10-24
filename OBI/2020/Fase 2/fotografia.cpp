#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> pii;
#define INF 0x3f3f3f3f

vector<pii> validos;

int main(){
    int x, y; cin >> x >> y;
    int n; cin >> n;
    int i, j;
    pii menor = {INF, -2};

    for(int k = 0; k < n; k++){
        cin >> i >> j;
        if((i >= x && j >= y) || (i >= y && j >= x))
            validos.push_back({i*j, k});
    }

    for(pii tmp: validos)
        if(menor.first > tmp.first){
            menor.first = min(menor.first, tmp.first);
            menor.second = tmp.second;
        }

    cout << menor.second+1 << endl;
}
