#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n, i;
    double pos = 0, neg = 0, zero = 0;
    cin >> n;
    double dec[n];
    for(i=0;i<n;i++){
        cin >> dec[i];
    }
    for(i=0;i<n;i++){
        if(dec[i]>0){
            pos += 1.0;
        }
        else if(dec[i]<0){
            neg += 1.0;
        }
        else if(dec[i]==0){
            zero += 1.0;
        }
    }
    cout << fixed << setprecision(6) <<pos/n << endl << neg/n << endl << zero/n << endl;

    return 0;
}
