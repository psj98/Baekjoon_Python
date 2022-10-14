#include <iostream>
#include <algorithm>
#define MAX 1001

using namespace std;

int arr[MAX];
int dp[MAX];

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    if(n==1 && arr[0]==0){
        printf("0");
        return 0;
    }

    else if(n==1 || arr[0]==0){
        printf("-1");
        return 0;
    }

    else{
        for(int i=0; i<n; i++){
            for(int j=1; j<=arr[i]; j++){
                if(i==0 || dp[i]!=0){
                    if(dp[i+j]==0) dp[i+j]=dp[i]+1;
                    else dp[i+j]=min(dp[i]+1, dp[i+j]);
                }
            }
        }
    }

    if(dp[n-1]==0) printf("-1");
    else printf("%d", dp[n-1]);

	return 0;
}