#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n=-1, clk=1;

    while(true){
        cin >> n;

        if(n == 0) break;
        cout << "Teste " << clk++ << endl;
        long long total = pow(2, n)-1;
        cout << total << endl;
        cout << endl;
    }
    return 0;
}