#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(5);
    v.push_back(3);
    v.push_back(8);
    v.push_back(9);
    v.push_back(1);

    sort(v.begin(), v.end());

    // Primeiro maior do que x
    auto it = upper_bound(v.begin(), v.end(), 10);
    cout << v[it-v.begin()] << ' ' << it-v.begin() << endl;

    if(it == v.end()) cout << "Não encontrado" << endl;

    // Ultimo maior do que x
    auto it1 = upper_bound(v.begin(), v.end(), 10, greater<int>());
    cout << v[it1-v.begin()-1] << ' ' << it1-v.begin()-1 << endl;

    if(it1-- == v.begin()) cout << "Não encontrado" << endl;

    // Ultimo menor que x (primeiro antes dele)
    auto it2 = lower_bound(v.begin(), v.end(), 1);

    if(it2 == v.begin()) cout << "Nao encontrado" << endl;
    else cout << v[it2-v.begin()-1] << endl;

    // Primeiro menor que x (ultimo antes dele) ???
}
