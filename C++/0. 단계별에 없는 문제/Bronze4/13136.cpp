#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    ll n, w, h;
    scanf("%lld %lld %lld", &n, &w, &h);
    
    if(n%h!=0) n=n/h+1;
    else n/=h;

    if(w%h!=0) w=w/h+1;
    else w/=h;

    printf("%lld", n*w);
    
    return 0;
}