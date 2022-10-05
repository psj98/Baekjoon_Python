#include <iostream>

typedef long long ll;
using namespace std;

int main() {
    ll n, s=0, sum=0;
    scanf("%lld", &n);

    while(1){
        s++;
        if(n-sum-s>s || n-sum-s==0) sum+=s;
        else break;
    }

    if(n-sum==0) printf("%lld", s-1);
    else printf("%lld", s);
    
    return 0;
}