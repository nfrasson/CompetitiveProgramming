#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t; cin >> n >> t;

    vector<string> nomes(n);
    vector<pair<int, int>> rating(n);
    vector<int> times[t+3];

    for(int i = 0; i < n; i++){
        cin >> nomes[i];
        cin >> rating[i].first;
        rating[i].second = i;
    }

    sort(rating.begin(), rating.end(), greater<pair<int, int>>());

    int team = 1;
    for(pair<int, int>aluno: rating){
        times[team].push_back(aluno.second);

        if(team == t) team = 1;
        else team++;
    }

    for(int i = 1; i <= t; i++){
        cout << "Time " << i << endl;
        vector<string> integrantes;
        for(int aluno: times[i]){
            integrantes.push_back(nomes[aluno]);
        }
        sort(integrantes.begin(), integrantes.end());
        for(string integrante:integrantes)
            cout << integrante << endl;
        cout << endl;
    }


}