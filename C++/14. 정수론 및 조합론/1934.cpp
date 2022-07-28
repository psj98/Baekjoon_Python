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
    int a, n, m;
    scanf("%d", &a);

    for(int i=0; i<a; i++){
        scanf("%d %d", &n, &m);
        printf("%d\n", lcm(n, m));
    }

    return 0;
}