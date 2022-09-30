#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    int a;
    scanf("%d", &a);

    for(int i=0; i<a; i++){
        ll b, c;
        scanf("%lld %lld", &b, &c);
        printf("%lld\n", (b/c)*(b/c));
    }

    return 0;
}