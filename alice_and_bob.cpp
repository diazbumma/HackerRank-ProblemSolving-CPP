#include<iostream>
using namespace std;

int main(){
    int i, j;
    int A[3], B[3];
    int pointA = 0, pointB = 0;

    cin >> A[0] >> A[1] >> A[2];
    cin >> B[0] >> B[1] >> B[2];

    for(i=0;i<3;i++){
        if(A[i]>B[i]){
            pointA++;
        }
        else if(A[i]<B[i]){
            pointB++;
        }
    }
    cout << pointA << " " << pointB << endl;

    return 0;
}
