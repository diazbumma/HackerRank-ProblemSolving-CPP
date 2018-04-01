#include<iostream>
using namespace std;

int main(){
    int n, i, j, temp, hasil;
    int seq[55];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> seq[i];
    }
    for(i=0;i<n;i++){
        temp = seq[i];
        for(j=0;j<2;j++){
            temp = seq[temp-1];
        }
        hasil = seq[temp-1];
        cout << hasil << endl;
    }

    return 0;
}
