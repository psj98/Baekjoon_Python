#include <iostream>
#define MAX 100001
#define MOD 1000000009

typedef long long ll;
using namespace std;

ll dp[MAX][3]={{0, 0, 0}, {1, 0, 0}, {0, 1, 0}, {1, 1, 1}};

int main() {
	int n, t;
    scanf("%d", &t);

    for(int i=4; i<MAX; i++){
        dp[i][0]=(dp[i-1][1]+dp[i-1][2])%MOD;
        dp[i][1]=(dp[i-2][0]+dp[i-2][2])%MOD;
        dp[i][2]=(dp[i-3][0]+dp[i-3][1])%MOD;
    }

    for(int i=0; i<t; i++){
        scanf("%d", &n);
        printf("%lld\n", (dp[n][0]+dp[n][1]+dp[n][2])%MOD);
    }

	return 0;
}