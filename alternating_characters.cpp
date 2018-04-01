#include<iostream>
using namespace std;

int main(){
    int i, j;
    int n, del;
    string letter;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> letter;
        del=0;
        for(j=1;j<letter.length();j++){
            if(letter[j]==letter[j-1]){
                del++;
            }
        }
        cout << del << endl;
    }

    return 0;
}
