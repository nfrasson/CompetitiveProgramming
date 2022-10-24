#include <iostream>

using namespace std;

bool verifica_senha(string senha, string pedaco){
    if(int(pedaco.size()) > int(senha.size()))
        return false;
    
    for(int i = 0; i <= int(senha.size())-int(pedaco.size()); i++){
        if(senha[i] == pedaco[0]){
            int i_tmp=i;
            for(int j = 0; j < int(pedaco.size()); j++){
                if(pedaco[j] != senha[i_tmp])
                    break;
                if(j == int(pedaco.size())-1)
                    return true;
                i_tmp++;
            }
        }
    }
    return false;
}

int main(){
    int n; cin >> n;
    string senhas[n];
    int ans=0;

    for(int i = 0; i < n; i++){
        cin >> senhas[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j != i){
                if(verifica_senha(senhas[i], senhas[j]))
                    ans++;
            }
        }
    }
    cout << ans << endl;
}