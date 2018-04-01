#include<iostream>
using namespace std;

int main(){
    int i;
    int n, key, temp;
    string encrypt;
    cin >> n;
    cin >> encrypt;
    cin >> key;
    key %= 26;
    for(i=0;i<n;i++){
        if((encrypt[i]>=65)&&(encrypt[i]<=90)){
            encrypt[i]+=key;
            if(encrypt[i]>90){
                encrypt[i]-=26;
            }
        }
        else if((encrypt[i]>=97)&&(encrypt[i]<=122)){
            temp = encrypt[i];
            temp+=key;
            if(temp>122){
                temp-=26;
            }
            encrypt[i]=temp;
        }
        //int lala =  encrypt[i];
        //cout << lala << " ";
    }
    //cout << endl;
    cout << encrypt << endl;
    return 0;
}
