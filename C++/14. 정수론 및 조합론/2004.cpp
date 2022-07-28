// 2와 5 소인수분해
#include <iostream>

typedef long long ll;
using namespace std;

ll ft(ll a, ll b){
    ll ans=0;
    for(ll i=b; i<=a; i*=b)
        ans+=a/i;
    
    return ans;
}

int main(){
    ll n, m, t, f;
    scanf("%lld %lld", &n, &m);

    f=ft(n, 5)-ft(n-m, 5)-ft(m, 5);
    t=ft(n, 2)-ft(n-m, 2)-ft(m, 2);

    printf("%lld", min(f, t));

    return 0;
}