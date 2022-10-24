#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v = {0, 4, 5, 11, 11, 20};

    cout << upper_bound(v.begin(), v.end(), 19, greater<int>())-v.begin()-1 << endl;
}