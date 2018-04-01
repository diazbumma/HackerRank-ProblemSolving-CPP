#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int i, j, k;
    int n;
    string word;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> word;
        j=0;
        k=word.length()-1;
        bool fun;
        while(j!=word.length()-2){
            if(fabs(word[j]-word[j+1])!=fabs(word[k]-word[k-1])){
                fun = false;
                break;
            }
            //cout << fabs(word[j]-word[j+1]) << " " <<fabs(word[k]-word[k-1]) << endl;
            j++;
            k--;
            fun = true;
        }
        if(fun){
            cout << "Funny" << endl;
        }
        else
            cout << "Not Funny" << endl;
    }


    return 0;
}
