#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a+b==c)
        printf("%.lf+%.lf=%.lf", a, b, c);
    else if(a-b==c)
        printf("%.lf-%.lf=%.lf", a, b, c);
    else if(a*b==c)
        printf("%.lf*%.lf=%.lf", a, b, c);
    else if(a/b==c)
        printf("%.lf/%.lf=%.lf", a, b, c);
    else if(a==b+c)
        printf("%.lf=%.lf+%.lf", a, b, c);
    else if(a==b-c)
        printf("%.lf=%.lf-%.lf", a, b, c);
    else if(a==b*c)
        printf("%.lf=%.lf*%.lf", a, b, c);
    else if(a==b/c)
        printf("%.lf=%.lf/%.lf", a, b, c);

    return 0;
}