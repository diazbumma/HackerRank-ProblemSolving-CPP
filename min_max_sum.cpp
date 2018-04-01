#include<iostream>
using namespace std;

unsigned long long a[5], res[5];

int main(){
    int i,j;
    unsigned long long minimum, maximum;
    for(i=0;i<5;i++){
        cin >> a[i];
    }
    for(i=0;i<5;i++){
        //res[i] = 0;
        for(j=0;j<5;j++){
            res[i] += a[j];
        }
        res[i] -= a[i];
    }
    minimum = res[0];
    maximum = res[0];

    //searching with linear search
    for(i=1;i<5;i++){
        if(minimum > res[i]){
            minimum = res[i];
        }
        if(maximum < res[i]){
            maximum = res[i];
        }
    }
    cout << minimum << " " << maximum << endl;
    return 0;
}
