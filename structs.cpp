#include<iostream>
using namespace std;

struct student{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main(){
    student absenPertama;
    cin >> absenPertama.age >> absenPertama.first_name >> absenPertama.last_name >> absenPertama.standard;
    cout << absenPertama.age << " " << absenPertama.first_name << " " << absenPertama.last_name << " " << absenPertama.standard << endl;
    return 0;
}
