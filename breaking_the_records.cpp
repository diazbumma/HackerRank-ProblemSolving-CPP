#include<iostream>
using namespace std;

//using linear search
int main(){
    int n, m, i, j;
    int lowest=0, highest=0;
    unsigned long long s[10005];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> s[i];
    }
    int tempLow = s[0];
    int tempHigh = s[0];
    for(i=1;i<n;i++){
        if(tempLow > s[i]){
            tempLow = s[i];
            lowest++;
        }
        if(tempHigh < s[i]){
            tempHigh = s[i];
            highest++;
        }
    }
    cout << highest << " " <<lowest << endl;

    return 0;
}
