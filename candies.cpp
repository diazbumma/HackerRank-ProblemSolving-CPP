#include<iostream>
using namespace std;
//typedef long long big;

unsigned long long lookup[100005];

unsigned long long candy_mundur(unsigned long long rate[], unsigned long long i){
    if(lookup[i]==0){
        if(rate[i-1]<rate[i]){
            lookup[i] = 1+candy_mundur(rate, i-1);
        }
        else
            lookup[i] = 1;
    }
    return lookup[i];
}

unsigned long long candy_maju(unsigned long long rate[], unsigned long long i){
    if(lookup[i]==0){
        if(rate[i]>=rate[i+1]){
            lookup[i] = 1+candy_maju(rate, i+1);
        }
        else
            lookup[i] = 1;
    }
    return lookup[i];
}

unsigned long long candy(unsigned long long rate[], unsigned long long i){
    if(rate[i]>rate[i+1]){
        return candy_maju(rate, i);
    }
    else{
        return candy_mundur(rate, i);
    }
}

int main(){
    unsigned long long i, j;
    unsigned long long n;
    unsigned long long total = 0;
    cin >> n;
    unsigned long long rate[n+1];
    for(i=0;i<n;i++){
        cin >> rate[i];
    }
    for(i=0;i<n;i++){
        //total+=candy(rate, i);
        cout << candy(rate, i) << endl;
    }
    //cout << total << endl;

    return 0;
}
