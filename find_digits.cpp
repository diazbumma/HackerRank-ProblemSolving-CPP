#include<iostream>
using namespace std;

int main(){
    int i, j;
    int n, angka, angka_copy, angka_copy2, the_digit, even;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> angka;
        angka_copy = angka;
        angka_copy2 = angka;
        even = 0;
        while(angka_copy > 0){
            the_digit = angka_copy%10;
            if(the_digit>0){
                if(angka_copy2%the_digit==0){
                    even++;
                }
            }
            angka_copy /= 10;
        }
        cout << even << endl;
    }
    return 0;
}
