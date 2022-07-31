#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%d", int(max(a*b/c, a/b*c)));
    
    return 0;
}