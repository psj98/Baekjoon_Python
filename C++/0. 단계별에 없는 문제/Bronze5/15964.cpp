#include <iostream>

typedef long long ll;
using namespace std;

int main(){
    ll n, m;
    scanf("%lld %lld", &n, &m);

    printf("%lld", (n+m)*(n-m));
    
    return 0;
}