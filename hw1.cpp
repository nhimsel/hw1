#include <iostream>

using namespace std;

int main(){
    short age=18;
    short year=2024;
    int population=123456;
    long distance=1234567890;
    char grade='A';
    float temperature=98.6;
    double pi=3.14159;
    bool isStudent=true;
    short combined=age+year;
    long difference=population-distance;
    short divResult= year/age;
    grade='B';
    temperature-=5.5;
    pi+=.001;
    isStudent=false;
    cout<<age<<"     "<<year<<"    "<<combined<<"\n";
    cout<<population<<"     "<<distance<<"    "<<difference<<"\n";
    cout<<divResult<<"\n";
    cout<<grade<<"     "<<temperature<<"     "<<pi<<"\n";
    cout<<isStudent;
    return 0;
}
