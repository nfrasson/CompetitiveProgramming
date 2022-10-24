#include <iostream>
#include <vector>

using namespace std;

#define INF 0x3f3f3f3f

int main(){
    int a, v, x, y, clk=0;
    cin >> a >> v;

    while(a != 0 && v != 0){
        vector<int> traf(110, 0);
        for(int i = 0; i < v; i++){
            cin >> x >> y;
            traf[x]++;
            traf[y]++;
        }

        vector<int> maior_trafego;
        int mx = -INF;

        for(int i = 1; i<=a; i++){
            if(traf[i] > mx){
                mx = traf[i];
                maior_trafego.clear();
                maior_trafego.push_back(i);
            }
            else if(traf[i] == mx)
                maior_trafego.push_back(i);
        }

        cout << "Teste " << ++clk << endl;
        for(int tmp: maior_trafego)
            cout << tmp << ' '; 
        cout << endl;
        cin >> a >> v;
    }
}