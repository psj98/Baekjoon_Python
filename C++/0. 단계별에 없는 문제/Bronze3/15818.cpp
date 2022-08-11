#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    int n, m;
    ll a, sum=1;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
        scanf("%lld", &a);
        sum*=(a%m);
        sum%=m;
    }

    printf("%lld", sum);

    return 0;
}