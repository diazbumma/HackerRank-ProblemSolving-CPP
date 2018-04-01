#include<iostream>
#include<iomanip>
using namespace std;


int main()
{

    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int a;
    double b;
    string kata;

    // Read and save an integer, double, and String to your variables.
    cin >> a;
    cin >> b;
    getline(cin >> ws, kata);

    // Print the sum of both integer variables on a new line.
    cout << i+a << endl;

    // Print the sum of the double variables on a new line.
    cout << b+d << endl;

    // Concatenate and print the String variables on a new line
    cout << s+kata << endl;
    // The 's' variable above should be printed first.

    return 0;
}
