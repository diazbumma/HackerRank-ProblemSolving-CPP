#include <string>
#include <iostream>
#include <sstream>
using namespace std;

int main(){
    int i, j, hour;
    string waktu, hh, hh1, mm, ss, ampm;
    hh = "";
    cin >> waktu;

    for(i=0;i<2;i++){
        hh += waktu[i];
    }
    for(i=3;i<5;i++){
        mm += waktu[i];
    }
    for(i=6;i<8;i++){
        ss += waktu[i];
    }
    for(i=8;i<10;i++){
        ampm += waktu[i];
    }

    int hourvalue;
    istringstream ( hh ) >> hourvalue;

    if(ampm == "AM" && hourvalue ==12){
        hourvalue = 0;
    }
    if(ampm == "PM"){
        hourvalue += 12;
        if(hourvalue > 24){
            hourvalue %= 24;
        }
        if(hourvalue == 24){
            hourvalue = 12;
        }
    }

    if(hourvalue < 10){
        cout << "0" << hourvalue;
    }
    else{
        cout << hourvalue;
    }
    cout << ":" << mm << ":" << ss << endl;


    return 0;
}
