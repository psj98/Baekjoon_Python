#include <iostream>

using namespace std;

int fact(int a){
    int n=1;
    for(int i=2; i<=a; i++)
        n*=i;
    
    return n;
}

int main() {
    int n, k, a=1, b=1;
    scanf("%d %d", &n, &k);

    printf("%d", fact(n)/(fact(k)*fact(n-k)));

    return 0;
}