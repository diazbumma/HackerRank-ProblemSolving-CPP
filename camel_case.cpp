#include<iostream>
using namespace std;

int main(){
    int i;
    int s=0;
    string letter;
    cin >> letter;
    for(i=0;i<letter.length();i++){
        if((letter[i]>=65)&&(letter[i]<=90)){
            s++;
        }
    }
    cout << s+1 << endl;
    return 0;
}
