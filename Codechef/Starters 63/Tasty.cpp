#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;

    while(t--){
        int x, y; cin >> x >> y;

        x = 2*x; y = 5*y;

        if(x > y) cout << "Chocolate" << endl;
        else if(y > x) cout << "Candy" << endl;
        else cout << "Either" << endl;
    }
}