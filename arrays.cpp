#include<iostream>
using namespace std;

int main(){
    int i;
    int n;
    int arr[1005];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=n-1;i>=0;i--){
        if(i!=0){
            cout << arr[i] << " ";
        }
        else
            cout << arr[i] << endl;
    }

    return 0;
}
