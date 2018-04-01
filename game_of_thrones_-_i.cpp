#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main(){
    int i, j;
    string key;
    stack<char>keyan; //keyan for key anagram :v
    cin >> key;
    sort(key.begin(),key.end());
    for(i=0;i<key.length();i++){
        if(keyan.empty()){
            keyan.push(key[i]);
        }
        else if(keyan.top()==key[i]){
            keyan.pop();
        }
        else{
            keyan.push(key[i]);
        }
    }
    if(keyan.empty() || keyan.size()==1){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
