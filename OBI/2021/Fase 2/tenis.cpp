#include <iostream>
#include <vector>

using namespace std;

#define INF 0x3f3f3f3f

#define zera for(int k = 0; k < 4; k++) visitado[k] = false;

int main(){
    int menor = INF;
    vector<int> v(4);
    bool visitado[4];

    for(int i = 0; i < 4; i++){
        cin >> v[i];
    }

    for(int i = 0; i < 4; i++){
        for(int j = i+1; j < 4; j++){
            int dupla1=0, dupla2=0;
            zera;
            visitado[i] = true;
            visitado[j] = true;
            dupla1 += v[i] + v[j];
            for(int l = 0; l < 4; l++)
                if(!visitado[l]) dupla2 += v[l];
            menor = min(menor, max(dupla1, dupla2) - min(dupla1, dupla2));
        }
    }
    cout << menor << endl;
}