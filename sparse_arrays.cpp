#include<iostream>
using namespace std;

int main(){
    int i, j, temp;
    int n, q;
    int hitq[1005];
    string coll[1005], query[1005];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> coll[i];
    }
    cin >> q;
    for(i=0;i<q;i++){
        cin >> query[i];
    }
    for(i=0;i<q;i++){
        temp = 0;
        for(j=0;j<n;j++){
            //if(coll[j].find(query[i]) != string:: npos){
            if(coll[j] == query[i]){
                temp++;
            }
        }
        cout << temp << endl;
    }

    return 0;
}
