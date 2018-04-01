#include<iostream>
using namespace std;

int main(){
    int i, j;
    int N, T, width[100000];
    int en, ex, pass;

    cin >> N >> T;
    for(i=0;i<N;i++){
        cin >> width[i];
    }
    for(i=0;i<T;i++){
        cin >> en >> ex;
        pass = width[en];
        for(j=en;j<=ex;j++){
            if(width[j]<pass){
                pass = width[j];
            }
        }
        cout << pass << endl;
    }
    return 0;
}
