#include <iostream>

typedef long long ll;
using namespace std;

long long cal(ll a, ll b, ll c){
    if(b==0) return 1;

    ll n=cal(a, b/2, c);
    n=n*n%c;
    
    if(b%2==0) return n;
    else return n*a%c;
}

int main() {
    ll a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    printf("%lld", cal(a, b, c));
    
    return 0;
}