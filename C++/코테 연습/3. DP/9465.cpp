#include <iostream>

using namespace std;

int arr[2][100001];
int dp[2][100001];

int main() {
    int a, t, n;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d", &n);

        for(int j=0; j<2; j++)
            for(int k=0; k<n; k++)
                scanf("%d", &arr[j][k]);

        for(int j=0; j<n; j++){
            if(j==0){
                dp[0][j]=arr[0][j];
                dp[1][j]=arr[1][j];
            }

            else if(j==1){
                dp[0][j]=dp[1][j-1]+arr[0][j];
                dp[1][j]=dp[0][j-1]+arr[1][j];
            }

            else{
                dp[0][j]=arr[0][j]+max(dp[1][j-1], dp[1][j-2]);
                dp[1][j]=arr[1][j]+max(dp[0][j-1], dp[0][j-2]);
            }
        }

        printf("%d\n", max(dp[0][n-1], dp[1][n-1]));
    }    

	return 0;
}