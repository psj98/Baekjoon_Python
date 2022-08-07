#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double l;
    scanf("%lf", &l);

    printf("%.9lf", l*l/4*sqrt(3));

    return 0;
}