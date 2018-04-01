#include<iostream>
using namespace std;

int main(){
    int n, i, j, temp;
    int grade[65];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> grade[i];
    }
    for(i=0;i<n;i++){
        temp = (grade[i]+5)-(grade[i]%5);
        if((temp-grade[i]<3) && (grade[i] >= 38)){
            grade[i] = temp;
        }
    }
    for(i=0;i<n;i++){
        cout << grade[i] << endl;
    }
    return 0;
}
