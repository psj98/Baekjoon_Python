#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    if(!s.compare("A+")) printf("4.3");
    else if(!s.compare("A0")) printf("4.0");
    else if(!s.compare("A-")) printf("3.7");
    else if(!s.compare("B+")) printf("3.3");
    else if(!s.compare("B0")) printf("3.0");
    else if(!s.compare("B-")) printf("2.7");
    else if(!s.compare("C+")) printf("2.3");
    else if(!s.compare("C0")) printf("2.0");
    else if(!s.compare("C-")) printf("1.7");
    else if(!s.compare("D+")) printf("1.3");
    else if(!s.compare("D0")) printf("1.0");
    else if(!s.compare("D-")) printf("0.7");
    else if(!s.compare("F")) printf("0.0");
    
    return 0;
}