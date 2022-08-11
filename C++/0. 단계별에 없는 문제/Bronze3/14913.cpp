#include <iostream>

using namespace std;

int main() {
    int a, d, k;
    scanf("%d %d %d", &a, &d, &k);

    if((k-a)%d==0 && (k-a)/d+1>0) printf("%d", (k-a)/d+1);
    else printf("X");

    return 0;
}