#include <iostream>

using namespace std;

int dp[11]={0, 1, 2, 4};

int main() {
    int a, n;
    scanf("%d", &n);

    for(int i=4; i<11; i++){
        dp[i]+=dp[i-1]+dp[i-2]+dp[i-3];
    }

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        printf("%d\n", dp[a]);
    }

	return 0;
}