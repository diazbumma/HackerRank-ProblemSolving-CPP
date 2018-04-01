#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    unsigned long long i;
    unsigned long long n, k;
    unsigned long long toy = 0, total = 0;
    cin >> n >> k;
    unsigned long long price[n];
    for(i=0;i<n;i++){
        cin >> price[i];
    }
    sort(price, price+n);
    for(i=0;i<n;i++){
        if(total+price[i]<=k){
            toy++;
            total+=price[i];
        }
        else
            break;
    }
    cout << toy << endl;

    return 0;
}
