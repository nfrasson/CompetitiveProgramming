#include <iostream>

using namespace std;

int main(){
    int t; cin >> t;
    int n, m, ci, total;
    int clk=0, ans;

    while(t--){
        cin >> n >> m;
        total = 0;
        for(int i = 0; i < n; i++){
            cin >> ci;
            total += ci;
        }
        ans = total%m;

        cout << "Case #" << ++clk << ": " << ans << endl;
    }
}