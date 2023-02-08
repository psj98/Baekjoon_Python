#include <iostream>

typedef long long ll;
using namespace std;

int main(){
    int n;
    ll ans=0;

    cin >> n;
    
    for(int i=1; i<=n; i++)
        ans+=(n/i)*i;
    
    cout << ans;

    return 0;
}