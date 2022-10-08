#include <iostream>

typedef long long ll;
using namespace std;

ll gcd(ll a, ll b){
    if(a%b==0) return b;

    return gcd(b, a%b);
}

int main() {
    ll a, b;
    scanf("%lld %lld", &a, &b);

    for(int i=0; i<gcd(a, b); i++)
        printf("1");

    return 0;
}