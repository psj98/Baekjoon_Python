#include <iostream>

using namespace std;

int main() {
    int n, x;
    scanf("%d", &n);

    while(1){
        scanf("%d", &x);
        if(x==0) break;

        if(x%n==0) printf("%d is a multiple of %d.\n", x, n);
        else printf("%d is NOT a multiple of %d.\n", x, n);
    }

    return 0;
}