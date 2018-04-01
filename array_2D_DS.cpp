#include<iostream>
using namespace std;

int main(){
    int i, j;
    int temp = -63; //value given from the worst case possibility
    int hourglass;
    int arr[6][6];
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            cin >> arr[i][j];
        }
    }
    for(i=0;i<=3;i++){
        for(j=0;j<=3;j++){
            hourglass = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if(hourglass > temp){
                temp = hourglass;
            }
        }
    }
    cout << temp << endl;

    return 0;
}
