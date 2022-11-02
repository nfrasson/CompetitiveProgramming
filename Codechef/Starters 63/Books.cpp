#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;

    while(t--){
        double x, y, z; cin >> x >> y >> z;
        int total = ceil(y/z) * x;

        cout << total << endl;
    }
}