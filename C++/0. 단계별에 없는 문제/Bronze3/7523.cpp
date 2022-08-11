#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        ll n, m;
        scanf("%lld %lld", &n, &m);

        printf("Scenario #%d:\n", i+1);
        if((m-n+1)%2==0) printf("%lld\n\n", (n+m)*(m-n+1)/2);
        else printf("%lld\n\n", (n+m)*(m-n)/2+(m+n)/2);
    }

    return 0;
}