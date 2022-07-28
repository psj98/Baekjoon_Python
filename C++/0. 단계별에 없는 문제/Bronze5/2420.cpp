#include <iostream>

typedef long long ll;
using namespace std;

int main(){
    ll n, m;
    scanf("%lld %lld", &n, &m);

    printf("%lld", abs(m-n));

    return 0;
}