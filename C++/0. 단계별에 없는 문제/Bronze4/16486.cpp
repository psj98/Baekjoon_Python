#include <iostream>
#define PI 3.141592

using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%.6f", a*2+2*b*PI);

    return 0;
}