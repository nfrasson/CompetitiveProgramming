#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int search(int left, int right, int item){
    if(left > right)
        return -1;

    int mid = (left+right)/2;

    if(v[mid] == item)
        return mid;
    else if(v[mid] > item)
        return search(left, mid-1, item);
    else if(v[mid] < item)
        return search(mid+1, right, item);
}

int main(){
    int n, q, x; cin >> n >> q;

    v.resize(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    while(q--){
        cin >> x;
        cout << search(0, n-1, x) << endl;
    }
}