#include <iostream>

typedef long long ll;
using namespace std;

ll dp[68];

ll koong(int n){
    if(n<=1) return 1;
    else if(n==2) return 2;
    else if(n==3) return 4;
    else{
        if(dp[n]==0)
            dp[n]=koong(n-1)+koong(n-2)+koong(n-3)+koong(n-4);
        else return dp[n];
    }

    return dp[n];
}

int main() {
    int n, t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d", &n);
        ll num=koong(n);
        printf("%lld\n", num);
    }

	return 0;
}