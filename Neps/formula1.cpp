#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

int main(){
    int g, p, s, k, maior, piloto, tmp, soma; 
    
        while(true){
        cin >> g >> p;

        if(g == 0 && p == 0) break;

        vector<vector<int>> posicoes(p+1);
        vector<int> pontuacao(p+1, 0);
        vector<int> pontos;
        vector<int> vencedores;

        while(g--){
            for(int i = 1; i <= p; i++){
                cin >> tmp;
                posicoes[i].push_back(tmp);
            }
        }

        cin >> s;

        while(s--){
            cin >> k;
            maior = INT_MIN;
            pontos.clear(); pontos.resize(k+1);

            for(int i = 1; i <= k; i++){
                cin >> pontos[i];
            }

            for(int i = 1; i <= p; i++){
                soma = 0;
                for(int posicao: posicoes[i]){
                    if(posicao <= k) soma += pontos[posicao];
                }
                if(soma > maior){
                    maior = soma;
                    vencedores.clear();
                    vencedores.push_back(i);
                }
                else if(soma == maior)
                    vencedores.push_back(i);
            }
            sort(vencedores.begin(), vencedores.end());

            for(int vencedor: vencedores){
                cout << vencedor << ' ';
            }
            cout << endl;
        }
    }

}