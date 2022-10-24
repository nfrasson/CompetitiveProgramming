#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
    float k, n, x, total=0;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> x;

        total += ceil(x/k);
    }
    
    cout << ceil(total/2.0) << endl;
}