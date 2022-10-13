#include <iostream>
#include <algorithm>

using namespace std;

int dp[16];
int cost[16];
int pay[16];

int main() {
    int a, n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d %d", &dp[i], &cost[i]);

    for(int i=n-1; i>=0; i--){
        if(i+dp[i]<=n){
            pay[i]=cost[i]+*max_element(pay+i+dp[i], pay+n);
        }

        else{
            cost[i]=0;
            pay[i]=0;
        }
    }

    printf("%d", *max_element(pay, pay+16));

	return 0;
}