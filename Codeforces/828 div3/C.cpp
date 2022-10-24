#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    int n, maximal=INT_MIN;
    string s;
    char l;

    while(t--){
        cin >> n >> l >> s;

        maximal=INT_MIN;

        if(l == 'g'){
            cout << 0 << endl;
            continue;
        }
        vector<int> greens;

        for(int i = 0; i < n; i++)
            if(s[i] == 'g') greens.push_back(i);
        
        sort(greens.begin(), greens.end());
        
        int frente = -1, tras = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == l){
                auto it1 = upper_bound(greens.begin(), greens.end(), i, greater<int>());
                if(it1 == greens.end()) frente = -1;
                else{
                    frente = greens[it1-greens.begin()-1]-i;
                }

                auto it2 = lower_bound(greens.begin(), greens.end(), i);
                if(it2 == greens.begin()) tras = -1;
                else{
                    tras = (n-i-1) + greens[it2-greens.begin()-1];
                }

                cout << frente << ' ' << tras << endl;

                maximal = max(maximal, max(frente, tras));
            }
        }

        cout << maximal << endl;
        
    }
    
}