#include <iostream>

using namespace std;

int main() {
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);

    a+=n/3600;
    b+=(n%3600)/60;
    c+=(n%3600)%60;

    if(c>=60) c%=60, b+=1;
    if(b>=60) a+=b/60, b%=60;
    if(a>=24) a%=24;

    printf("%d %d %d", a, b, c);

    return 0;
}