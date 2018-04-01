#include<iostream>
using namespace std;

int main(){
    int i, j;
    string sos;
    int alter=0;
    cin >> sos;
    for(i=0;i<sos.length();i++){
        if(i%3==0 && sos[i]!='S'){
            alter++;
        }
        else if(i%3==1 && sos[i]!='O'){
            alter++;
        }
        else if(i%3==2 && sos[i]!='S'){
            alter++;
        }
    }
    cout << alter << endl;

    return 0;
}
