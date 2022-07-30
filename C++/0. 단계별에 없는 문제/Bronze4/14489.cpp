#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    ll a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if(a+b<c*2) printf("%lld", a+b);
    else printf("%lld", (a+b)-c*2);
    
    return 0;
}