#include<iostream>
using namespace std;

//power with divide and conquer method
int power(int num, int n){
    if(n==0)
        return 1;
    else if(n%2==0)
        return power(num, n/2)*power(num, n/2);
    else
        return num*power(num, n/2)*power(num, n/2);
}

int powerSum(int x, int n){
    while(){

    }
}

int main(){
    int i, j;
    int x, n;
    cin >> x >> n;
    cout << power(x, n) << endl;

    return 0;
}
