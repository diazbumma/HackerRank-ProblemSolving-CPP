#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int i, j;
    int n;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int temp = 1;
    int hitung = 1;
    for(i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            hitung++;
        }
        else{
            hitung = 1;
        }
        if(hitung>temp){
            temp++;
        }
        //cout << temp << " ";
    }

    cout << n-temp << endl;
    return 0;
}
