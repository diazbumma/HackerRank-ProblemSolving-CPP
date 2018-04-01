#include<iostream>
using namespace std;

int main(){
    int i, j;
    int n, beautiful;
    //jangan lupa string merupakan array of CHAR
    string binString;
    cin >> n >> binString;
    i = 0;
    beautiful = 0;
    while(i<n-2){
        if((binString[i]=='0') && (binString[i+1]=='1' && binString[i+2]=='0')){
            i+=3;
            beautiful++;
        }
        else
            i++;
    }

    cout << beautiful << endl;

    return 0;
}
