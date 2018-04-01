#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int i, j;
    int n;
    int arr[1005];
    cin >> n;
    int nearest = n;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((arr[i]==arr[j]) && j-i<nearest){
                nearest = j-i;
            }
        }
    }
    if(nearest != n){
        cout << nearest << endl;
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}
