#include<iostream>
using namespace std;

int main(){
    int n, i, hit=0;
    int level=0;
    bool valley = false;
    string step;
    cin >> n >> step;
    for(i=0;i<n;i++){
        if(level==0 && step[i]=='D'){
            level--;
            valley = true;
        }
        else if(level==-1 && step[i]=='U'){
            level++;
            valley = false;
            hit++;
        }
        else if(step[i]=='U'){
            level++;
        }
        else if(step[i]=='D'){
            level--;
        }
    }
    cout << hit << endl;
    return 0;
}
