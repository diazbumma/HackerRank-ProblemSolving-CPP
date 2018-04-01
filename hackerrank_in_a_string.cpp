#include<iostream>
using namespace std;

int main(){
    int i, j;
    int n, s;
    string hr;
    string hrword = "hackerrank";
    cin >> n;
    for(i=0;i<n;i++){
        cin >> hr;
        s = 0;
        for(j=0;j<hr.length();j++){
            if(hr[j]==hrword[s]){
                s++;
            }
            if(s==hrword.length()-1){
                break;
            }
        }
        if(s==hrword.length()-1){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
