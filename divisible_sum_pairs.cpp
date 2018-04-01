#include<iostream>
using namespace std;

int main(){
    int n, i, j, k, divisible=0;
    int a[105];
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((a[i]+a[j])%k==0){
                divisible++;
            }
        }
    }

    cout << divisible << endl;

    return 0;
}
