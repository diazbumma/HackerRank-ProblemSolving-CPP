#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int i;
    int n, k;
    int lu, imp;
    int luck = 0;
    vector<int>limp;
    vector<int>lunim;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> lu >> imp;
        if(imp==1){
            limp.push_back(lu);
        }
        if(imp==0){
            lunim.push_back(lu);
        }
    }
    sort(limp.begin(), limp.end());
    sort(lunim.begin(), lunim.end());
    for(i=limp.size()-1;i>=0;i--){
        if(k>0){
            luck += limp[i];
            k--;
        }
        else{
            luck -= limp[i];
        }
    }

    //cout << luck << endl;
    for(i=lunim.size()-1;i>=0;i--){
        luck += lunim[i];
    }

    cout << luck << endl;

    return 0;
}
