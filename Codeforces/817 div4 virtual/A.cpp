#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string name = "Timur", s;
    
    int t; cin >> t;
    int n;

    while(t--){
        int count = 0;
        map<char, bool> m;
        cin >> n;
        cin >> s;

        if(n != 5) cout << "NO" << endl;

        else{
            for(char x: s){
                if(x == 'T' && m.find('T') == m.end()){
                    m['T'] = true;
                    count++;
                } 
                else if(x=='i' && m.find('i') == m.end()){
                    m['i'] = true;
                    count++;
                } 
                else if(x=='m' && m.find('m') == m.end()){
                    m['m'] = true;
                    count++;
                } 
                else if(x=='u' && m.find('u') == m.end()){
                    m['u'] = true;
                    count++;
                } 
                else if(x=='r' && m.find('r') == m.end()){
                    m['r'] = true;
                    count++;
                } 
            }
            if(count == 5) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    
    
}