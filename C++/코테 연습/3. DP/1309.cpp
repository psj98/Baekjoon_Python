#include <iostream>
#define MOD 9901

using namespace std;

// ox xo xx
int dp[100001][4];

int main() {
    int n;
    scanf("%d", &n);

    dp[1][0]=dp[1][1]=dp[1][2]=1;
    dp[1][3]=3;

    for(int i=2; i<=n; i++){
        dp[i][0]=(dp[i-1][1]+dp[i-1][2])%MOD;
        dp[i][1]=(dp[i-1][0]+dp[i-1][2])%MOD;
        dp[i][2]=(dp[i-1][0]+dp[i-1][1]+dp[i-1][2])%MOD;
        dp[i][3]=(dp[i][0]+dp[i][1]+dp[i][2])%MOD;
    }

    printf("%d", dp[n][3]);

	return 0;
}