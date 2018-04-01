#include<iostream>
#include<vector>
using namespace std;

int main(){
    int i;
    vector<char>krk;
    string s;
    cin >> s;
    for(i=0;i<s.length();i++){
        if(!krk.empty()){
            if(krk.back()==s[i]){
                krk.pop_back();
            }
            else
                krk.push_back(s[i]);
        }
        else
            krk.push_back(s[i]);
    }
    if(!krk.empty()){
        for(i=0;i<krk.size();i++){
            cout << krk[i];
        }
    }
    else
        cout << "Empty String";

    cout << endl;

    return 0;
}
