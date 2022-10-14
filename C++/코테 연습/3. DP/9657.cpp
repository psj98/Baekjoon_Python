#include <iostream>
#define MAX 1001

using namespace std;

int dp[MAX]={0, 1, 0, 1, 1};

int main() {
    int n;
    scanf("%d", &n);

    for(int i=5; i<=n; i++){
        if(dp[i-1]==0 || dp[i-3]==0 || dp[i-4]==0) dp[i]=1;
        else dp[i]=0;
    }

    if(dp[n]==0) printf("CY");
    else printf("SK");

	return 0;
}