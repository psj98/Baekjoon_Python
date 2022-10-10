#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

int gcd(int a, int b){
    if(a%b==0) return b;

    return gcd(b, a%b);
}

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int a, n;
        ll sum=0;
        vector<int> v;
        scanf("%d", &n);

        for(int j=0; j<n; j++){
            scanf("%d", &a);
            v.push_back(a);
        }

        for(int j=0; j<n-1; j++)
            for(int k=j+1; k<n; k++)
                sum+=gcd(v[j], v[k]);

        printf("%lld\n", sum);
    }

    return 0;
}