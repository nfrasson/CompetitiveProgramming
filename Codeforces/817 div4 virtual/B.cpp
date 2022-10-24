#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<char> a(n+1);
        vector<char> b(n+1);

        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 'G') a[i] = 'B';
        }    
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(b[i] == 'G') b[i] = 'B';
        }  

        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                cout << "NO" << endl;
                break;
            } 
            if(i == n-1)
                cout << "YES" << endl;
        }  
    }
}