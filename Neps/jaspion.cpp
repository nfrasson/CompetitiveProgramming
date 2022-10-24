#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    int m, n;
    string jap, por, linha, erro;


    while(t--){
        map<string, string> dic;
        cin >> m >> n;
        for(int i = 0; i < m*2; i++){
            if(i % 2 != 0)
                getline(cin, jap);
            else{
                getline(cin, por);
                dic[jap] = por;
            }
        }
        while(n--){
            getline(cin, linha);
            string tmp="";
            for(int i = 0; i < int(linha.size()); i++){
                if(linha[i] == ' '){
                    if(dic.find(tmp) != dic.end()){
                        cout << dic[tmp] << ' ';
                    }else cout << tmp << ' ';
                    tmp = "";
                }
                else{
                    tmp += linha[i];
                }
            }
            cout << endl;
        }
    }
}