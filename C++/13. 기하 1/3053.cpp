#include <iostream>
#define PI 3.1415926535897932

using namespace std;

int main() {
    double r;
    scanf("%lf", &r);

    printf("%.6lf\n", r*r*PI);
    printf("%.6lf", r*r*2);

    return 0;
}