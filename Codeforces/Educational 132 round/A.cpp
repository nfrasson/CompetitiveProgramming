#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t, n, count, key;
    cin >> t;
    vector<int> v(4);

    while(t--){
        count = 1;
        cin >> n;
        for(int i = 1; i < 4; i++)
            cin >> v[i];

        key = n;
        for(int i = 1; i < 4; i++){
            if(v[key] != 0){
                count++;
                key = v[key];
            }
            else{
                if(count < 3){
                    cout << "NO" << endl;
                    break;
                }
                else{
                    cout << "YES" << endl;
                    break;
                }
            }
        }
    }
}