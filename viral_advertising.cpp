#include<iostream>
using namespace std;

int main(){
    int i, j;
    int n;
    int viewers=5, likers=0, daylike;
    cin >> n;
    for(i=0;i<n;i++){
        daylike = viewers/2;
        likers += daylike;
        viewers = daylike*3;
    }
    cout << likers << endl;

    return 0;
}
