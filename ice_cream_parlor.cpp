#include<iostream>
using namespace std;

//with Bruteforce method
int main(){
    int i, j, k;
    int t, m, n;
    cin >> t;
    for(i=0;i<t;i++){
        cin >> m >> n;
        int c[n];
        //ID numbers is index of c +1
        for(j=0;j<n;j++){
            cin >> c[j];
        }
        int temp1, temp2;
        bool found = false;
        for(j=0;j<n;j++){
            for(k=j+1;k<n;k++){
                if(c[j]+c[k]==m){
                    temp1 = j+1;
                    temp2 = k+1;
                    found = true;
                    break;
                }
            }
            if(found){
                break;
            }
        }
        cout << temp1 << " " << temp2 << endl;
    }

    return 0;
}
