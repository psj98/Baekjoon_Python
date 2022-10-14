#include <iostream>
#include <algorithm>
#include <math.h>
#define MAX 10001

using namespace std;

double arr[MAX];
double dp[MAX];

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%lf", &arr[i]);

    dp[0]=arr[0];
    for(int i=1; i<n; i++)
        dp[i]=max(arr[i], arr[i]*dp[i-1]);

    printf("%.3lf", *max_element(dp, dp+n));

	return 0;
}