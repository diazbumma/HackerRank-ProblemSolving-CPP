#include<iostream>
using namespace std;

int alpha[26];

int main(){
    int i, j, temp;
    int n, geel = 0;
    string gem;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> gem;
        bool cek[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for(j=0;j<gem.length();j++){
            temp = gem[j]-97;
            if(cek[temp]==false){
                alpha[temp]++;
                cek[temp] = true;
            }
        }
    }
    for(i=0;i<n;i++){
        if(alpha[i]==n){
            geel++;
        }
    }

    cout << geel << endl;
    return 0;
}
