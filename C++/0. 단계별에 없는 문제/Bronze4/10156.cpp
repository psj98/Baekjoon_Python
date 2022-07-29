#include <iostream>

using namespace std;

int main() {
    int k, n, m;
    scanf("%d %d %d", &k, &n, &m);

    k=k*n-m;
    if(k<=0) printf("0");
    else printf("%d", k);

    return 0;
}