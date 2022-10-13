#include <iostream>
#include <algorithm>
#define MAX 1001

using namespace std;

int map[MAX][MAX];
int dp[MAX][MAX];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &map[i][j]);

    dp[0][0]=map[0][0];

    for(int i=1; i<m; i++) dp[0][i]=map[0][i]+dp[0][i-1];
    for(int i=1; i<n; i++) dp[i][0]=map[i][0]+dp[i-1][0];

    for(int i=1; i<n; i++)
        for(int j=1; j<m; j++)
            dp[i][j]=map[i][j]+max(dp[i-1][j], max(dp[i-1][j-1], dp[i][j-1]));

    printf("%d", dp[n-1][m-1]);

	return 0;
}