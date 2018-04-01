#include<iostream>
#include<math.h>
using namespace std;

void update(int *x, int *y){
    int temp1 = *x;
    int temp2 = *y;
    temp1 = *x + *y;
    temp2 = fabs(*x - *y);
    *x = temp1;
    *y = temp2;
}

int main(){
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    cout << a << endl << b << endl;

    return 0;
}
