#include<iostream>
using namespace std;

int main(){
    int i;
    int n, e = 100, k;
    int cloud[50];
    cin >> n >> k;

    for(i=0;i<n;i++){
        cin >> cloud[i];
    }

    int jump = 0;
    do{
        jump += k;
        jump %= n;
        if(cloud[jump]==1){
            e -= 2;
        }
        e--;
    }while(jump!=0 && e>0);

    cout << e << endl;

    return 0;
}
