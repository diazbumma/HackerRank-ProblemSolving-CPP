#include<iostream>
using namespace std;

int main(){
    int n, p, turn, turn2;
    cin >> n >> p;

    if(n%2==0){
        n++;
    }
    if(p%2==1){
        turn = (p-1)/2;
        turn2 = (n-p)/2;
    }
    else{
        turn = p/2;
        turn2 = (n-p)/2;
    }

    if(turn < turn2){
        cout << turn << endl;
    }
    else{
        cout << turn2 << endl;
    }

    return 0;
}
