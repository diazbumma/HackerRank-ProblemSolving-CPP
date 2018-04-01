#include<iostream>
using namespace std;

int main(){
    int n, i;
    unsigned long long A = 0;
    unsigned long long sum = 0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> A;
        sum += A;
    }

    cout << sum << endl;

    return 0;
}
