    #include <bits/stdc++.h>
     
    using namespace std;
     
    vector<set<int>> baloes(1000010);
    //vector<int> restantes(1000010, 0);
     
    int main(){
    	ios::sync_with_stdio(0);
    	cin.tie(0); cout.tie(0);
    	int n, maioraltura=-1; cin >> n;
    	int alt;
    	
    	for(int i = 0; i < n; i++){
    		cin >> alt;
    		maioraltura=max(maioraltura, alt);
    		baloes[alt].insert(i);
    		//restantes[alt]++;
    	}
    	
    	int count = 0, flechas=0;
    	int i = maioraltura;
    	int j=maioraltura, pos;
    	
    	while(count != n){
    		pos = -1;
    		
    		while(i >= 0 && !baloes[i].empty()){
    			auto it = upper_bound(baloes[i].begin(), baloes[i].end(), pos);  
    			if(it != baloes[i].end()){
    				count++;
    				pos = *it;
    				//restantes[i]--;
    				baloes[i].erase(*it);
    				i--;
    			}
    			else break;
    		}
    		
    		while(baloes[j].empty()){
    			j--;
    		}
    		i = j;
    		flechas++;
    	}
    	cout << flechas << endl;
    }
