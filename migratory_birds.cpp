#include<iostream>
using namespace std;

unsigned long long type[10];

int main(){
    unsigned long long i;
    unsigned long long n;
    int bird;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> bird;
        type[bird]++;
    }
    int com = 1;
    for(i=1;i<=5;i++){
        if(type[i]>type[com]){
            com = i;
        }
    }
    cout << com << endl;

    return 0;
}
