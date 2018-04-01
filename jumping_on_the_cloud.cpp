#include<iostream>
using namespace std;

int main(){
    int i;
    int n;
    int cloud[105];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> cloud[i];
    }
    int jump = 0;
    i = 0;
    while(i<n){
        if(cloud[i+2]==0 && i<n){
            i+=2;
            jump++;
        }
        else if(cloud[i+1]!=0 && i<n){
            break;
        }
        else if(i<n){
            i++;
            jump++;
        }
    }

    cout << jump << endl;

    return 0;
}
