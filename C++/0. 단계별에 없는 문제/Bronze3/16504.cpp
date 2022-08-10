#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    ll a, n, sum=0;
    scanf("%lld", &n);

    for(int i=0; i<n*n; i++){
        scanf("%lld", &a);
        sum+=a;
    }

    printf("%lld", sum);

    return 0;
}