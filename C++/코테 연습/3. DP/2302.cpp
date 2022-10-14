#include <iostream>
#include <algorithm>
#define MAX 41

using namespace std;

int dp[MAX]={1, 1, 2};

int main() {
    int a, n, m, k=0, sum=1;
    scanf("%d %d", &n, &m);

    for(int i=3; i<MAX; i++)
        dp[i]=dp[i-1]+dp[i-2];

    for(int i=0; i<m; i++){
        scanf("%d", &a);
        sum*=dp[a-k-1];
        k=a;
    }

    sum*=dp[n-k];

    printf("%d", sum);

	return 0;
}