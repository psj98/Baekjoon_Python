#include <iostream>

typedef long long ll;
using namespace std;

ll gcd(ll a, ll b){
    if(a%b==0) return b;
    
    return gcd(b, a%b);
}

int main() {
    ll a, b, n;
    scanf("%d %d", &a, &b);

    n=gcd(a, b);

    printf("%lld", a*b/n);

    return 0;
}