#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    unsigned long long n, i, j;
    cin >> n;
    long long numb[n];
    for(i=0;i<n;i++){
        cin >> numb[i];
    }
    sort(numb, numb+n);
    for(i=0;i<n;i++){
        cout << numb[i] << endl;
    }
    return 0;
}
