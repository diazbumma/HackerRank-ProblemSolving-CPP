#include<iostream>
using namespace std;

int main(){
    int n, i, j;
    cin >> n;
    int a[n][n];
    int primary = 0, secondary = 0, result;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(i=0;i<n;i++){
        primary += a[i][i];
    }
    j=0;
    for(i=n-1;i>=0;i--){
        secondary += a[i][j];
        j++;
    }
    result = primary - secondary;
    if(result<0){
        result *= -1;
    }
    cout << result << endl;

    return 0;
}
