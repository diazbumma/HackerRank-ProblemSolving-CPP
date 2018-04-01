#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long i, j;
    long long n, k;
    unsigned long long total = 0;
    cin >> n >> k;
    long long flo[n];
    for(i=0;i<n;i++){
        cin >> flo[i];
    }

    sort(flo, flo+n);

    long long repeat = 0;
    long long temp = k;
    for(i=n-1;i>=0;i--){
        if(k>0){
            total += ((repeat+1)*flo[i]);
            k--;
        }
        else{
            repeat++;
            total += ((repeat+1)*flo[i]);
            k = temp-1; // temp-1 karena satu yang awal sudah dihitung di case ini
        }
    }
    cout << total << endl;

    return 0;
}
