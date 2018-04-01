#include<iostream>
using namespace std;

int penanda[105];

int main(){
    int n, i, j;
    int socks[105];
    int pairOfSocks = 0;

    cin >> n;
    for(i=0;i<n;i++){
        cin >> socks[i];
    }
    for(i=0;i<n;i++){
        if(penanda[i]!=1){
            for(j=i+1;j<n;j++){
                if(socks[j]==socks[i] && penanda[i]!=1){
                    penanda[j] = 1;
                    pairOfSocks++;
                    break;
                }
            }
        }
    }

    cout << pairOfSocks << endl;

    return 0;
}
