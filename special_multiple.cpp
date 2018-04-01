#include<iostream>
using namespace std;

int special(int numb){
    if(numb == 1){
        return 9;
    }
    else{
        return special()*10;
    }
}

int main(){
    int n;
    int numb;
    int i,j,k;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> numb;

    }

    ios_base::sync_with_stdio();
    return 0;
}
