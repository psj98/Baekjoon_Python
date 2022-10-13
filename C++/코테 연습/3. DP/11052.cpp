#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cost[1002];
int dp[1002];

int main() {
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        scanf("%d", &cost[i]);

    for(int i=1; i<=n; i++){
        vector<int> v;
        for(int j=0; j<=n; j++){
            if(i-j>0){
                if(j==0) v.push_back(dp[i-j]+cost[i]);
                else v.push_back(dp[i-j]+cost[j]);
            }
            else break;
        }

        dp[i]=*max_element(v.begin(), v.end());
    }

    printf("%d ", dp[n]);

	return 0;
}