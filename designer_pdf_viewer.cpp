#include<iostream>
using namespace std;

int main(){
    int i, j;
    int n = 26;
    int h = 0 ;
    int temp;
    int alpha[26];
    string l;
    for(i=0;i<n;i++){
        cin >> alpha[i];
    }
    cin >> l;
    for(i=0;i<l.length();i++){
        temp = l[i]-97;
        if(alpha[temp]>h){
            h = alpha[temp];
        }
    }
    cout << h*l.length() << endl;
    return 0;
}
