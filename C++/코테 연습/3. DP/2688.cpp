#include <iostream>
#define MAX 65

typedef long long ll;
using namespace std;

ll dp[MAX][10];

int main() {
    int n, t;
    scanf("%d", &t);

    for(int i=0; i<10; i++)
        dp[1][i]=1;

    for(int i=1; i<MAX; i++)
        dp[i][0]=1;

    for(int i=0; i<t; i++){
        ll sum=0;
        scanf("%d", &n);
        for(int j=1; j<=n; j++){
            for(int k=1; k<10; k++){
                dp[j][k]=dp[j][k-1]+dp[j-1][k];
            }
        }

        for(int j=0; j<10; j++)
            sum+=dp[n][j];

        printf("%lld\n", sum);
    }

	return 0;
}