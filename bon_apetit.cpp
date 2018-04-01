#include<iostream>
using namespace std;

int main(){
    int i, j;
    int n, k, c[100000];
    int charge, ana=0, brian=0;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> c[i];
    }
    cin >> charge;
    for(i=0;i<n;i++){
        if(i!=k){
            ana += c[i];
        }
    }
    ana /=2;
    charge -= ana;
    if(charge == 0){
        cout << "Bon Appetit" << endl;
    }
    else{
        cout << charge << endl;
    }

    return 0;
}
