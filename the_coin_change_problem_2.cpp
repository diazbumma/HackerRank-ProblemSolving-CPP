#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int lookup[255];

void init(int arr[]){
    int i;
    for(i=0;i<255;i++){
        arr[i] = -1;
    }
}

int coin(int type[], int n, int m){
    if(lookup[n]<0){
        if(n==0){
            lookup[n] = 0;
        }
        else{
            int i;
            int hitung = 0;
            for(i=0;i<m;i++){
                if(n>=type[i]){
                    if(coin(type, n-type[i], m)==0)
                        hitung++;
                    else
                        hitung += coin(type, n-type[i], m);
                }
            }
            lookup[n] = hitung;
        }
    }
    return lookup[n];
}

int main(){
    int i, j;
    int n, m;
    cin >> n >> m;
    int a[m];
    init(lookup);
    for(i=0;i<m;i++){
        cin >> a[i];
    }
    sort(a, a+m);
    cout << coin(a, n, m) << endl;

    return 0;
}
