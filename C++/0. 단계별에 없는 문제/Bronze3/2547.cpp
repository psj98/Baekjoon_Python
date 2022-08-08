#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    ll t, n;
    scanf("%lld", &t);

    for(ll i=0; i<t; i++){
        ll a, n, sum=0;
        scanf("%lld", &n);

        for(ll j=0; j<n; j++){
            scanf("%lld", &a);
            sum=(sum+a)%n;
        }
        
        if(sum%n==0) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}