#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(2);
    v.push_back(5);
    v.push_back(1);v.push_back(4);v.push_back(8);

    sort(v.begin(), v.end());

    auto it = lower_bound(v.begin(), v.end(), 4);

    cout << it-1 << endl;
}