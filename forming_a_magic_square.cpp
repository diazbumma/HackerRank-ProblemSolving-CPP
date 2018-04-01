#include<iostream>
using namespace std;

int main(){
    int i, j;
    int s[3][3];
    int cost, magic[7] = {0,0,0,0,0,0,0};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin >> s[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            magic[i] += s[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            magic[i+3] += s[j][i];
        }
    }
    for(i=0;i<3;i++){
        magic[6] += s[i][i];
    }

    for(i=0;i<7;i++){
        cout << magic[i] << " ";
    }

    return 0;
}
