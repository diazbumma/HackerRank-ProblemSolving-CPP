#include<iostream>
using namespace std;

int main(){
    int i, j;
    int N, T;
    int height;
    cin >> T;
    for(i=0;i<T;i++){
        height = 1;
        cin >> N;
        for(j=1;j<=N;j++){
            if(j%2==1){
                height*=2;
            }
            else{
                height+=1;
            }
        }
        cout << height << endl;
    }
    return 0;
}
