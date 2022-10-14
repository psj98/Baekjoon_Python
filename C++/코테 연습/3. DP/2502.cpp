#include <iostream>
#define MAX 31

using namespace std;

int dp[MAX][MAX];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i=0; i<MAX; i++)
        dp[i][0]=dp[i][i]=1;

    for(int i=2; i<MAX; i++)
        for(int j=1; j<i; j++)
            dp[i][j]=dp[i-1][j-1]+dp[i-1][j];

    printf("%d", dp[n-1][k-1]);

	return 0;
}