#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

vector<ll> v;

ll gcd(ll a, ll b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return (a*b)/gcd(a, b);
}

int main() {
    int n;
    ll a, ans;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%ld", &a);
        v.push_back(a);
    }

    ans=v[0];

    for(int i=0; i<v.size()-1; i++)
        ans=lcm(ans, v[i+1]);

    if(*max_element(v.begin(), v.end())==ans)
        printf("%ld", *min_element(v.begin(), v.end())*ans);
    else printf("%ld", ans);

    return 0;
}