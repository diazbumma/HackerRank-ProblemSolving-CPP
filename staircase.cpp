#include<iostream>
using namespace std;

int main(){
    int n, i, j;
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=n-i-1;j>=0;j--){
            cout << " ";
        }
        for(j=1;j<=i;j++){
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}
