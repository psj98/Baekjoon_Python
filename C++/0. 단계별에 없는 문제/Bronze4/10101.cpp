#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a+b+c!=180) printf("Error");
    else{
        if(a==b && b==c) printf("Equilateral");
        else if((a==b && b!=c) || (a!=c && b==c) || (a==c && b!=a)) printf("Isosceles");
        else if(a!=b && b!=c && c!=a) printf("Scalene");
    }

    return 0;
}