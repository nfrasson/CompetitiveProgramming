#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, q, ii, jj, ans=0;
    cin >> n;
    vector<int> v (n);

    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    cin >> q;

    while(q--){
        cin >> ii >> jj;

        ans=0;

        for(int i = ii; i <= jj; i++)
            ans+=v[i];
        
        cout << ans << endl;
    }
    
}