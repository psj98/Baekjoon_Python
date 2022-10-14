#include <iostream>
#include <algorithm>
#define MAX 21

using namespace std;

int arr[MAX];
int dp[MAX];

int main() {
    int n, t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d", &n);
        for(int j=0; j<n; j++)
            scanf("%d", &arr[j]);
        
        dp[0]=arr[0];
        for(int j=1; j<n; j++)
            dp[j]=max(arr[j], dp[j-1]+arr[j]);

        printf("%d\n", *max_element(dp, dp+n));
    }

	return 0;
}