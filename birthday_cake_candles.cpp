#include<iostream>
using namespace std;

int main(){
    int n, i, j;
    int arr[100000];
    int high, sum;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    high = 0;
    sum = 0;
    for(i=0;i<n;i++){
        if(arr[i]>high){
            high = arr[i];
            sum = 1;
        }
        else if(high==arr[i]){
            sum++;
        }
    }
    cout << sum << endl;

    return 0;
}
