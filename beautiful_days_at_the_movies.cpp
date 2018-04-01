#include<iostream>
#include<math.h>
using namespace std;

int rev(int num){
    int rev_num=0, temp;
    while(num>0){
        rev_num *= 10;
        temp = num%10;
        num /= 10;
        rev_num += temp;
    }
    return rev_num;
}

int main(){
    double res;
    long long has;
    long long i, j;
    long long a, b, k, beautiful=0;
    cin >> a >> b >> k;
    for(i=a;i<=b;i++){
        res = fabs(i-rev(i))/k;
        has = res;
        if(res-has==0){
            beautiful++;
        }
    }
    cout << beautiful << endl;

    return 0;
}
