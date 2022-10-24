#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> a(n+2);
    vector<int> v(n);
    int f;

    for(int i = 1; i<n; i++)
        cin >> a[i];
    
    for(int i = 0; i<n; i++)
        cin >> v[i];

    for(int i = 0; i < m; i++){
        cin >> f;

        if(f < a[1])
            cout << v[0] << ' ';
        else if(f >= a[n-1])
            cout << v[n-1] << ' ';
        else{
            int l = 1;
            int r = n-2;
            while(l <= r){
                int m = (l+r)/2;

                if(a[m+1] > f && a[m] <= f){
                    cout << v[m] << ' ';
                    break;
                }
                else if(f < a[m]){
                    r = m;
                }
                else{
                    l = m+1;
                }
            }
        }


        
    }
    cout << endl;
}