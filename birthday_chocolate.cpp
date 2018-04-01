#include<iostream>
using namespace std;

int choc[10000];

int main(){
    int i, j, d, m;
    int n, way=0;
    int piece;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> choc[i];
    }
    cin >> d >> m;
    for(i=0;i<n;i++){
        piece = 0;
        for(j=i;j<m+i;j++){
            piece += choc[j];
        }
        if(piece == d){
            way++;
        }
    }

    cout << way << endl;

    return 0;
}
