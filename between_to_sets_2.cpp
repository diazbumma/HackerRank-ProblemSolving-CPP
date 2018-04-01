#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector <int> a, vector <int> b) {
            int x=1,r=0,j=0,count=0;
        int[] d = new int[101];
        for(x=1;x<101;x++){
        	int c=0;
        		for(int i=0;i<a.length;i++) {
        			if(x%a[i]==0&&x>=a[i]){
        				c++;
        			}
        			}
        		if(c==a.length){
        			d[j]=x;
    				r++;
    				j++;
        		}
        		}
        for(j=0;j<r;j++){
        	int c=0;
            for(int i=0;i<b.length;i++){
         	   if(b[i]%d[j]==0){
         		   c++;
         	   }
            }
            if(c==b.length){
         	   count++;
            }
        }
        return count;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
