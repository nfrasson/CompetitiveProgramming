#include <iostream>

using namespace std;

int main(){
    string s;

    cin >> s;

    int q, ii, jj, ans;

    cin >> q;

    while(q--){
        ans = 0;
        cin >> ii >> jj;

        for(int i = ii-1; i < jj-1; i++){
            if(s[i]==s[i+1])
                ans++;
            if(i == jj-1)
                if(ans!=1 && ans!=0) ans++;
        }
        
        cout << ans << endl;
    }
}