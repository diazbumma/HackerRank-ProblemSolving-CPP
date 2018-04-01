#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int i, j = 0;
    int n;
    unsigned long long miles = 0;
    cin >> n;
    long long cal[n];
    for(i=0;i<n;i++){
        cin >> cal[i];
    }
    sort(cal, cal+n);
    for(i=n-1;i>=0;i--){
        miles += (cal[i]*(pow(2,j)));
        j++;
    }
    cout << miles << endl;

    return 0;
}
