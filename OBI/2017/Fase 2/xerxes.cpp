#include <iostream>
#include <vector>

using namespace std;

int v [5][2] = {{1, 2}, {2, 3}, {3, 4}, {4, 0}, {0, 1}};

int main(){
    int t, d_count=0, x_count=0, d, x; cin >> t;

    while(t--){
        cin >> d >> x;
        
        for(int i = 0; i < 2; i++){
            if(v[d][i] == x){
                d_count++;
                break;
            }
            else if(v[x][i] == d){
                x_count++;
                break;
            }
        }
    }

    if(d_count > x_count)
        cout << "dario" << endl;
    else
        cout << "xerxes" << endl;
}