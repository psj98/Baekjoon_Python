#include <iostream>

using namespace std;

int main(){
    int n, ans=0;
    scanf("%d", &n);

    int a=n;

    while(1){
        n--;
        if(n==0) break;

        if(n+n%10+(n/10)%10+(n/100)%10+(n/1000)%10+(n/10000)%10+(n/100000)%10+(n/1000000)%10==a)
            ans=n;
    }

    printf("%d", ans);

    return 0;
}