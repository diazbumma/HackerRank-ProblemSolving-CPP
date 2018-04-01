#include<iostream>
using namespace std;

int main(){
    int i, found;
    int v, n, arr[1005];
    cin >> v >> n;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]==v){
            found = i;
            break;
        }
    }
    cout << found << endl;
    return 0;
}
