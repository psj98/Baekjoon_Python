#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    int a, b;
    ll sum=1;
    scanf("%d %d", &a, &b);

    for(int i=a; i<=b; i++){
        ll n=i*(i+1)/2;
        sum*=n;
        sum%=14579;
    }

    printf("%lld", sum);

    return 0;
}