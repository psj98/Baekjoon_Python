#include <iostream>
#define MAX 101

typedef long long ll;
using namespace std;

int map[MAX][MAX];
ll dp[MAX][MAX];

int main() {
	int n;
	scanf("%d", &n);

    for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			scanf("%d", &map[i][j]);

	dp[0][0]=1;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<=9; k++){
				if(j-k>=0 && map[i][j-k]==k){
					dp[i][j]+=dp[i][j-k];
				}

				if(i-k>=0 && map[i-k][j]==k){
					dp[i][j]+=dp[i-k][j];
				}
			}
		}
	}

	printf("%lld", dp[n-1][n-1]);

	return 0;
}