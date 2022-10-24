#include <iostream>

using namespace std;

int binary(int left, int right, int item){
    if(left > right)
        return -1;
        
    int mid = (left+right)/2;
    int total = (mid*(mid+1))/2;
    int total_anterior = ((mid-1)*mid)/2;

    if(total == item)
        return mid;
    else if(total > item && total_anterior < item)
        return mid-1;
    else if(total > item)
        return binary(left, mid-1, item);
    else if(total < item)
        return binary(mid+1, right, item);
}

int main(){
    int t, n, total, weight; cin >> t;

    while(t--){
        cin >> n;
        weight = binary(0, 48000, n);
        cout << weight << endl;
    }
}