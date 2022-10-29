#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

bool verificaPalindromo(int h, int m){
    string hour = to_string(h);
    string minute = to_string(m);

    if(hour.size() == 1) hour = "0"+hour;
    if(minute.size() == 1) minute = "0"+minute;

    if(hour[0] == minute[1] && hour[1] == minute[0])
        return true;
    return false;
}

pii soma(pii horario, int plus){
    pii result;
    if((horario.first + (plus/60)) > 23){
        result.first = (plus/60)-(24-horario.first);
    }
    else{
        result.first = horario.first+(plus/60);
    }
    if((horario.second) + (plus%60) > 59){
        result.second = (plus%60)-(60-horario.second);
        result.first++;
    }
    else{
        result.second = horario.second+(plus%60);
    }
    if(result.first == 24) result.first = 0;
    return result;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;

    while(t--){
        int plus;

        string time;
        string hour = "";
        string minute = "";
        bool visto[24][60];

        int ans=0;

        for(int i = 0; i < 24; i++)
            for(int j = 0; j < 60; j++)
                visto[i][j] = false;

        cin >> time >> plus;
        bool found = false;
        for(char i: time){
            if(!found){
                if(i == ':') found = true;
                else hour += i;
            }
            else minute += i;
        }
        
        pii atual = {stoi(hour), stoi(minute)};

        while(!visto[atual.first][atual.second]){
            if(verificaPalindromo(atual.first, atual.second))
                ans++;
            
            visto[atual.first][atual.second] = true;
            atual = soma(atual, plus);
        }
        cout << ans << endl;
    }
}
