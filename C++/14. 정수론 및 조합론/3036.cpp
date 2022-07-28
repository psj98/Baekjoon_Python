#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main() {
    int a, n, cen;
    scanf("%d %d", &n, &cen);

    for(int i=0; i<n-1; i++){
        scanf("%d", &a);
        printf("%d/%d\n", cen/gcd(cen, a), a/gcd(cen, a));
    }

    return 0;
}