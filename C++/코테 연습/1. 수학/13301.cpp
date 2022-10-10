#include <iostream>

typedef long long ll;
using namespace std;

ll arr[83]={0, 1, 1, 2};

ll fibo(ll n){
    if(n==1) return arr[n];
    if(arr[n]!=0) return arr[n];
    
    arr[n]=fibo(n-1)+fibo(n-2);
    return arr[n];
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%lld", fibo(n+2)*2);

    return 0;
}