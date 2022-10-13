#include <iostream>

using namespace std;

int dp[1001][11];

int main() {
    int n, sum=0;
    scanf("%d", &n);

    for(int i=0; i<10; i++) dp[0][i]=1;

    for(int i=0; i<1001; i++) dp[i][0]=1;

    for(int i=1; i<=n; i++)
        for(int j=1; j<10; j++)
            dp[i][j]=(dp[i][j-1]+dp[i-1][j])%10007;

    printf("%d", dp[n][9]);

	return 0;
}