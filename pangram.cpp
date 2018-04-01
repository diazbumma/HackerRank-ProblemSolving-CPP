#include<iostream>
using namespace std;

//variable global memiliki nilai default 0
int alpha[26];

int main(){
    int i,j;
    string text;

    getline(cin, text);

    for(i=0;i<text.length();i++){
        if(text[i]!=32){
            if(text[i]<97){
                text[i] +=32;
            }
            j = text[i]-97;
            if((j>=0) && (j<=26)){
                alpha[j]++;
            }
        }
        //cout << j << " ";
    }
    //cout << endl << endl;
    bool pangram = true;
    for(i=0;i<26;i++){
        //cout << alpha[i] << " ";
        if(alpha[i]==0){
            pangram = false;
            break;
        }
    }

    if(!pangram){
        cout << "not pangram" << endl;
    }
    else
        cout << "pangram" << endl;

    return 0;
}
