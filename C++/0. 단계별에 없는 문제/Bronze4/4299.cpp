#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    scanf("%d %d", &a, &b);

    if(a+b<0 || a-b<0 || (a+b)%2==1 || (a-b)%2==1) printf("-1");
    else{
        c=(a+b)/2;
        d=(a-b)/2;

        if(c>d) printf("%d %d", c, d);
        else printf("%d %d", d, c);
    }

    return 0;
}