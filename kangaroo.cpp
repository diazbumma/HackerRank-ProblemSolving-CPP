#include<iostream>
using namespace std;

int main(){
    int kang1, kang2, jump1, jump2;
    cin >> kang1 >> jump1 >> kang2 >> jump2;
    if(((jump2>jump1) && (kang2>kang1)) || ((jump2<jump1) && (kang2<kang1))){
        cout << "NO" << endl;
    }
    else if (jump2==jump1 && kang1!=kang2){
        cout << "NO" << endl;
    }
    else{
        if(kang1<kang2 && jump1>jump2){
            do{
                kang1 += jump1;
                kang2 += jump2;
                if(kang1==kang2){
                    cout << "YES" << endl;
                    break;
                }
                else if(kang1>kang2){
                    cout << "NO" << endl;
                    break;
                }
            }while(kang1!=kang2);
        }
        else if(kang1>kang2 && jump1<jump2){
            do{
                kang1 += jump1;
                kang2 += jump2;
                if(kang1==kang2){
                    cout << "YES" << endl;
                    break;
                }
                else if(kang1<kang2){
                    cout << "NO" << endl;
                    break;
                }
            }while(kang1!=kang2);
        }
    }

    return 0;
}
