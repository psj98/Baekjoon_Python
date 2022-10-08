#include <iostream>
#define MAX 100001

using namespace std;

int dp[MAX]={0, -1, 1, -1, 2};

int main() {
    int n;
    scanf("%d", &n);

    for(int i=5; i<=n; i++){
        if(dp[i-2]!=-1 && dp[i-5]!=-1) dp[i]=min(dp[i-2], dp[i-5])+1;
        else if(dp[i-2]!=-1 && dp[i-5]==-1) dp[i]=dp[i-2]+1;
        else dp[i]=dp[i-5]+1;
    }

    printf("%d", dp[n]);

    return 0;
}