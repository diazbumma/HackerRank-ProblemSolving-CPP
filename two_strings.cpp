#include<iostream>
using namespace std;

int main(){
    int i, j, k;
    int n;
    bool found;
    string str1, str2;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> str1;
        cin >> str2;
        found = false;
        for(j=0;j<str1.length();j++){
            if(str2.find(str1[j]) != string::npos){
                found = true;
                break;
            }
        }
        if (found){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
