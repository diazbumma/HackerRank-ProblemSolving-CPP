#include<iostream>
using namespace std;

int main(){
    int i, j, j2, k;
    int n, ll ;
    string love;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> love;
        ll = (love.length()/2);
        j = love.length()-1;
        j2 = 0;
        k = 0;
        while(j!=ll-1){
            if(love[j]!=love[j2]){
                if(love[j]>love[j2]){
                    while(love[j]!=love[j2]){
                        love[j]--;
                        k++;
                    }
                }
                else{
                    while(love[j]!=love[j2]){
                        love[j2]--;
                        k++;
                    }
                }
            }
            j--;
            j2++;
        }
        cout << k << endl;
    }

    return 0;
}
