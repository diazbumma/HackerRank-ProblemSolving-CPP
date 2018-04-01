#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, i;
    int x, y, z;
    int catA, catB;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x >> y >> z;
        catA = fabs(z-x);
        catB = fabs(z-y);
        if(catB<catA){
            cout << "Cat B" << endl;
        }
        else if(catA<catB){
            cout << "Cat A" << endl;
        }
        else if(catA==catB){
            cout << "Mouse C" << endl;
        }
    }

    return 0;
}
