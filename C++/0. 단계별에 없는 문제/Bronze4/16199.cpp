#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    int n;
    if((e==b && f>=c) || e>b) n=d-a;
    else n=d-a-1;
    int m=d-a+1;
    int k=d-a;
    printf("%d\n%d\n%d", n, m, k);
    
    return 0;
}