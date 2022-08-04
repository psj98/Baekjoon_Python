#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    ll t, s=3, cnt=2;
    scanf("%lld", &t);

    for(int i=1; i<t; i++){
        s+=cnt;
        cnt*=2;
    }
    
    printf("%lld", s*s);

    return 0;
}