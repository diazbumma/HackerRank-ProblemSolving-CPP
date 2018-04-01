#include<iostream>
using namespace std;

int main(){
    int i, j;
    int n, k, student, present, kmin;
    cin >> n;
    for(i=0;i<n;i++){
        k=0;
        cin >> student >> kmin;
        for(j=0;j<student;j++){
            cin >> present;
            if(present <= 0){
                k++;
            }
        }
        if(k >= kmin){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
