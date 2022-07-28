#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a, b);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d\n%d", gcd(n, m), lcm(n, m));

    return 0;
}