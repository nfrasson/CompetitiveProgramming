#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;

    while(t--){
        map<string, bool> m1;
        map<string, bool> m2;
        map<string, bool> m3;
        set<string> s;

        int n; cin >> n;
        int p1=0, p2=0, p3=0;
        string tmp;

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                cin >> tmp;
                s.insert(tmp);
                if(i == 0){
                    m1[tmp] = true;
                }
                else if(i == 1){
                    m2[tmp] = true;
                }
                else if(i == 2){
                    m3[tmp] = true;
                }
            }
        }

        for(string x: s){
            if(m1.find(x) != m1.end()){
                if(m2.find(x) != m2.end() && m3.find(x) == m3.end()){
                    p1++;
                    p2++;
                }
                else if(m3.find(x) != m3.end() && m2.find(x) == m2.end()){
                    p1++;
                    p3++;
                }
                else if(m2.find(x) == m2.end() && m3.find(x) == m3.end())
                    p1+=3;
            }
            else if(m2.find(x) != m2.end()){
                if(m1.find(x) != m1.end() && m3.find(x) == m3.end()){
                    p1++;
                    p2++;
                }
                else if(m3.find(x) != m3.end() && m1.find(x) == m1.end()){
                    p2++;
                    p3++;
                }
                else if(m1.find(x) == m1.end() && m3.find(x) == m3.end())
                    p2+=3;
            }
            else if(m3.find(x) != m3.end()){
                if(m1.find(x) != m1.end() && m2.find(x) == m2.end()){
                    p3++;
                    p1++;
                }
                else if(m2.find(x) != m2.end() && m1.find(x) == m1.end()){
                    p2++;
                    p3++;
                }
                else if(m1.find(x) == m1.end() && m2.find(x) == m2.end())
                    p3+=3;
            }
        }

        cout << p1 << ' ' << p2 << ' ' << p3 << endl;
    }
}