#include <iostream>
#include <algorithm>

using namespace std;

int dp[1001];
int num[1001];

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &num[i]);

    dp[0]=num[0];

    for(int i=1; i<n; i++){
        int cnt=-1, sum=-1;
        for(int j=i-1; j>=0; j--){
            if(num[j]<num[i]){
                if(dp[j]>sum){
                    cnt=j;
                    sum=dp[j];
                }
            }
        }

        if(cnt==-1) dp[i]=num[i];
        else dp[i]=num[i]+dp[cnt];
    }

    printf("%d", *max_element(dp, dp+n));

	return 0;
}