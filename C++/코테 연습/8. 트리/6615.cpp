#include <iostream>
#define MAX 530

typedef long long ll;
using namespace std;

ll arr1[MAX];
ll arr2[MAX];

int main() {
    while(1){
        ll n, m;
        int x=0, y=0;
        scanf("%lld %lld", &n, &m);

        ll dn=n, dm=m;

        if(n==0 && m==0) break;

        while(n!=1){
            arr1[x]=n;
            if(n%2==0) n/=2;
            else n=n*3+1;
            x++;
        }
        arr1[x]=1;

        while(m!=1){
            arr2[y]=m;
            if(m%2==0) m/=2;
            else m=m*3+1;
            y++;
        }
        arr2[y]=1;

        while(arr1[x]==arr2[y]){
            x--, y--;
            if(x==-1 || y==-1) break;
        }

        printf("%lld needs %d steps, %lld needs %d steps, they meet at %lld\n", dn, x+1, dm, y+1, arr1[x+1]);
    }

    return 0;
}