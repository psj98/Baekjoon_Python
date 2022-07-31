#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b;
    float m;
    scanf("%d %d", &a, &b);

    m=(b-a)/400.0;
    printf("%f", 1/(1+pow(10, m)));
    
    return 0;
}