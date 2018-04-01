#include<iostream>
using namespace std;

int main(){
    int i,j,temp;
    int n = 20;
    int seq[1005];

    cin >> n;
    for(i=0;i<n;i++){
        cin >> seq[i];
    }

    for(i=1;i<n;i++){
        for(j=i;j>0;j--){
            if(seq[j]<seq[j-1]){
                temp = seq[j];
                seq[j] = seq[j-1];
                seq[j-1] = temp;
            }
            else{
                break;
            }
        }
        for(j=0;j<n;j++){
            if(j!=n-1){
                cout << seq[j] << " ";
            }
            else{
                cout << seq[j] << endl;
            }
        }
    }

    return 0;
}
