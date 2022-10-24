#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin >> t;
    int n, max_visits;
    int clk=0, ans;

    while(t--){
        cin >> n;

        ans = 0;
        vector<int> v(n);
        vector<bool> record(200010);
        
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        max_visits = v[0];
        for(int i = 0; i < n; i++){
            if(i != n-1 && i != 0){
                if(v[i] > v[i-1] && v[i] > max_visits && v[i] > v[i+1]){
                    max_visits = v[i];
                    ans++;
                }
            }
            else if(i == 0){
                if(v[i] > v[i+1]){
                    max_visits = v[i];
                    ans++;
                }
            }   
            else if(i == n-1){
                if(v[i] > v[i-1] && v[i] > max_visits){
                    max_visits = v[i];
                    ans++;
                }
            }     
        }

        cout << "Case #" << ++clk << ": " << ans << endl;
    }
}