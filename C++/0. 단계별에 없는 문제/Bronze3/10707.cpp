#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, p;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);

    int x=p*a;
    int y;
    if(p<=c) y=b;
    else y=b+(p-c)*d;

    printf("%d", min(x, y));

    return 0;
}