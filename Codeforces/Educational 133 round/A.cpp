#include <iostream>

using namespace std;

#define INF 0x3f3f3f3f;

int viz[4] = {-3, -2, 2, 3};

int main(){
    int t, n, pos=0, ans=INT_MAX; cin >> t;

    while(t--){
        cin >> n;
        ans = INT_MAX;
        if(n%2 == 0 || n%3 == 0){
            if(n%2 == 0)
                ans = min(ans, n/2);
            if(n%3 == 0)
                ans = min(ans, n/3);
        }
        else{
            int n_tmp = n;
            while(n_tmp != n+2){
                n_tmp++;
                if(n_tmp%2 == 0 || n_tmp%3 == 0){
                    if(n_tmp%2 == 0){
                        for(int i: viz){
                            if(n_tmp+i == n){
                                ans = min(ans, (n_tmp/2)+1);
                            }
                        }
                    }
                    if(n_tmp%3 == 0){
                        for(int i: viz){
                            if(n_tmp+i == n){
                                ans = min(ans, (n_tmp/3)+1);
                            }
                        }
                    }
                }
            }
            while(n_tmp != n-2){
                n_tmp--;
                if(n_tmp%2 == 0 || n_tmp%3 == 0){
                    if(n_tmp%2 == 0){
                        for(int i: viz){
                            if(n_tmp+i == n){
                                ans = min(ans, (n_tmp/2)+1);
                            }
                        }
                    }
                    if(n_tmp%3 == 0){
                        for(int i: viz){
                            if(n_tmp+i == n){
                                ans = min(ans, (n_tmp/3)+1);
                            }
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
}