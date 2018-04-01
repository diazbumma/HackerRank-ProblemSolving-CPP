#include<iostream>
using namespace std;

int main(){
    int i, j;
    int n, k, magic=0;
    int hurdle;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> hurdle;
        if(hurdle > k){
            magic += hurdle-k;
            k = hurdle;
        }
    }
    cout << magic << endl;

    return 0;
}
