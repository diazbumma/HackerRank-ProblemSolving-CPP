#include<iostream>
#include<math.h>
using namespace std;

unsigned long long lookup[25];

unsigned long long fibo_modif(unsigned long long t1, unsigned long long t2, unsigned long long n){
    unsigned long long temp1 , temp2;
    if(lookup[n]<1){
        if(n==1 || n==2){
            lookup[1] = t1;
            lookup[2] = t2;
        }
        else{
            temp1 = fibo_modif(t1,t2,(n-2));
            temp2 = (fibo_modif(t1, t2, (n-1))) * (fibo_modif(t1, t2, (n-1)));
            //cout << temp1 << " " << temp2 << endl;
            lookup[n]= temp1 + temp2;
        }
    }
    return lookup[n];
}

int main(){
    unsigned long long t1;
    unsigned long long t2;
    unsigned long long n;
    cin >> t1 >> t2 >> n;
    cout << fibo_modif(t1, t2, n) << endl;
    return 0;
}
