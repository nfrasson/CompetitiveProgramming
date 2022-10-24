#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> exams(3, 0);
    int base_grades[3] = {1, 2, 4};
    int a,  b;
    cin >> a >> b;

    if(a == 0 && b == 0){
        cout << 0 << endl;
        return 0;
    }

    for(int i = 0; i < 3; i++){
        if((a == base_grades[i] || b == base_grades[i]) && exams[i] == 0)
            exams[i] = 1;
    }

    if(a == 3 || b == 3 || a == 5 || b == 5 || a == 7 || b == 7){
        if(exams[0] != 1)
            exams[0] = 1;
    }

    if(a == 3 || b == 3 || a == 6 || b == 6 || a == 7 || b == 7){
        if(exams[1] != 1)
            exams[1] = 1;
    }

    if(a == 5 || b == 5 || a == 6 || b == 6 || a == 7 || b == 7){
        if(exams[2] != 1)
            exams[2] = 1;
    }

    int ans = 0;

    for(int i = 0; i < 3; i++)
        if(exams[i] == 1)
            ans+=base_grades[i];
    
    cout << ans << endl;
    return 0;

}