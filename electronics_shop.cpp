#include<iostream>
using namespace std;

int main(){
    unsigned long long i, j;
    unsigned long long n, m, s;
    //n brands of keyboard
    //m brands of USB drive
    //s dollars Monica to spend maximal

    cin >> s >> n >> m;
    unsigned long long keyPrice[1005], usbPrice[1005];
    for(i=0;i<n;i++){
        cin >> keyPrice[i];
    }
    for(i=0;i<m;i++){
        cin >> usbPrice[i];
    }

    long long int spend = -1;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            int total = keyPrice[i]+usbPrice[j];
            if(total<=s && total>spend){
                spend = total;
            }
        }
    }
    cout << spend << endl;

    return 0;
}
