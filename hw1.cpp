#include <iostream>

using namespace std;

int main(){
    signed char age=18; //There is no byte variable in c++, there is only std::byte, which cannot be used in arithmetic. As such, a signed char can also hold an 8-bit signed integer, so a signed char has been used instead.
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
    cout<<+age<<"     "<<year<<"    "<<combined<<"\n";
    cout<<population<<"     "<<distance<<"    "<<difference<<"\n";
    cout<<divResult<<"\n";
    cout<<grade<<"     "<<temperature<<"     "<<pi<<"\n";
    cout<<isStudent;
    return 0;
}