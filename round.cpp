#include <bits/stdc++.h>
using namespace std;

double total;

int main()
{
    double meal;
    int tip, tax;

    cin >> meal >> tip >> tax;

    cout << round (meal + (meal*tip/100) + (meal*tax/100)) << endl;

         return 0;
}
