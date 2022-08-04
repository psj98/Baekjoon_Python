#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    a--, b--;

    int a1=a/4+1;
    int a2=a%4;
    int b1=b/4+1;
    int b2=b%4;

    printf("%d", abs(b1-a1)+abs(b2-a2));

    return 0;
}