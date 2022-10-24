#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int search(int left, int right, int item){
    if (left > right)
        return -1;
        
    int mid = (left+right)/2;

    if(v[mid] == item)
        return mid;
    else if(v[mid] < item)
        search(mid+1, right, item);
    else if(v[mid] > item)
        search(left, mid-1, item);
}