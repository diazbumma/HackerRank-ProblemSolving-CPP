#include<iostream>
#include<vector>
using namespace std;

int max_remove(){


    return ;
}

int main(){
    int i, j;
    int n, m;
    cin >> n >> m;
    vector<int>tree[n+2];
    for(i=0;i<m;i++){
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    cout << max_remove() << endl;

    return 0;
}
