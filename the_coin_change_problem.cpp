#include<iostream>
#include<array>
using namespace std;

unsigned long long lookup[255];
bool computed[255];

void init(long long arr[]){
    int i;
    for(i=0;i<255;i++){
        lookup[i] = -1;
    }
}

unsigned long long coin(unsigned long long type[], unsigned long long n, int m){
    if(computed[n]==false){
        if(n==0){
            lookup[n] = 0;
            computed[n] = true;
            return 0;
        }
        else{
            int i;
            unsigned long long ways = 0, hasil;
            for(i=0;i<m;i++){
                if(n>=type[i]){
                    ways++;
                    lookup[n] = ways+coin(type, n-type[i], m);
                    computed[n] = true;
                    return ways+coin(type, n-type[i], m);
                }
            }
        }
    }
    return lookup[n];
}

int main(){
    int i, j, m;
    unsigned long long n;
    cin >> n >> m;
    unsigned long long a[m];
    //init(a);
    for(i=0;i<m;i++){
        cin >> a[i];
    }
    cout << coin(a, n, m) << endl;

    return 0;
}
