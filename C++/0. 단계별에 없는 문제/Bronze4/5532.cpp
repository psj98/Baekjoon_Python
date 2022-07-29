#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, l;
    scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);

    if(a%c!=0) a=a/c+1;
    else a/=c;

    if(b%d!=0) b=b/d+1;
    else b/=d;

    printf("%d", l-max(a, b));

    return 0;
}