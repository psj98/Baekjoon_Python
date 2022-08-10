#include <iostream>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        double a;
        char s[3];
        scanf("%lf %s", &a, s);
        cin.ignore();

        if(s[0]=='k') printf("%.4lf lb\n", a*2.2046);
        else if(s[0]=='l' && s[1]!='b') printf("%.4lf g\n", a*0.2642);
        else if(s[0]=='l' && s[1]=='b') printf("%.4lf kg\n", a*0.4536);
        else if(s[0]=='g') printf("%.4lf l\n", a*3.7854);
    }

    return 0;
}