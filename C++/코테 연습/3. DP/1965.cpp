#include <iostream>
#include <algorithm>
#define MAX 1001

using namespace std;

int arr[MAX];
int dp[MAX]={1};

int main() {
	int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(int i=1; i<n; i++){
        int num=-1, idx=-1;
        for(int j=i-1; j>=0; j--){
            if(arr[j]<arr[i] && dp[j]>num){
                num=dp[j];
            }
        }

        if(num!=-1) dp[i]=num+1;
        else dp[i]=1;
    }

    printf("%d ", *max_element(dp, dp+n));

	return 0;
}