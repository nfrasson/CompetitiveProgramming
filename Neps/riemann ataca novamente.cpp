#include <iostream>
#include <vector>

using namespace std;

const int MAX = 10000010;

bool e_composto[MAX];
vector<int> primos;

int binary(int left, int right, int item){
    int mid = (left+right)/2;

    if(primos[mid] == item)
        return mid+1;
    if(primos[mid] > item)
        return binary(left, mid-1, item);
    if(primos[mid] < item)
        return binary(mid+1, right, item);
}

void crivo(){
    e_composto[1] = true;

    for(int i = 2; i < MAX; i++){
        if(!e_composto[i]){
            for(int j = 2; j * i < MAX; j++)
                e_composto[i*j] = true;
        }
    }
}

int main(){
    int Q, pi; cin >> Q;
    crivo();
    for(int i = 2; i < MAX; i++)
        if(!e_composto[i]) primos.push_back(i);
    
    while(Q--){
        cin >> pi;
        cout << binary(0, int(primos.size()), pi) << endl;
    }

}
