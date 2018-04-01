#include<iostream>
using namespace std;

int main(){
    int i, j;
    int s, t, a, b, m, n, apple=0, orange=0;
    int a_fall[100005], o_fall[100005];
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    for(i=0;i<m;i++){
        cin >> a_fall[i];
        if(a+a_fall[i]>=s && a+a_fall[i]<=t){
            apple++;
        }
    }
    for(i=0;i<n;i++){
        cin >> o_fall[i];
        if(b+o_fall[i]>=s && b+o_fall[i]<=t){
            orange++;
        }
    }
    cout << apple << endl << orange << endl;

    return 0;
}
