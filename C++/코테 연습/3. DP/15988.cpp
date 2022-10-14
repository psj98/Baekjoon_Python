#include <iostream>

typedef long long ll;
using namespace std;

ll dp[1000002]={1, 1, 2, 4};

int main() {
	int t, n;
    scanf("%d", &t);

    for(int k=0; k<t; k++){
        scanf("%d", &n);
        for(int i=4; i<=n; i++)
            dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%1000000009;

        printf("%lld\n", dp[n]);
    }

	return 0;
}