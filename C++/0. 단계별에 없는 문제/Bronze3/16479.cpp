#include <iostream>

using namespace std;

int main() {
    double k, d1, d2;
    scanf("%lf %lf %lf", &k, &d1, &d2);

    printf("%.2lf", k*k-((d2-d1)/2)*((d2-d1)/2));

    return 0;
}