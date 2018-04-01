#include<iostream>
using namespace std;

int main(){
    int i;
    int n, rot;
    int arr[100005];
    cin >> n >> rot;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=0;i<n;i++){
        if(i!=n-1){
            cout << arr[(i+rot)%n] << " ";
        }
        else
            cout << arr[(i+rot)%n] << endl;
    }

    return 0;
}
