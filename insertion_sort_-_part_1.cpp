#include<iostream>
using namespace std;
int arr[1005];

int main(){
    int i, j, temp;
    int n;
    bool inserted = false;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    temp = arr[n-1];
    for(i=n-2;i>=-1;i--){
        if(arr[i]>temp){
            arr[i+1] = arr[i];
        }
        else if(!inserted){
            arr[i+1] = temp;
            inserted = true;
        }
        if(!inserted){
            for(j=0;j<n;j++){
                if(j!=n-1){
                    cout << arr[j] << " ";
                }
                else{
                    cout << arr[j] << endl;;
                }
            }
        }
    }
    for(j=0;j<n;j++){
        if(j!=n-1){
            cout << arr[j] << " ";
        }
        else{
            cout << arr[j] << endl;;
        }
    }

    return 0;
}
