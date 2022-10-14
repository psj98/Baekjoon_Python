#include <iostream>
#define MAX 51
#define VOLMAX 1001

using namespace std;

int V[MAX];
int dp[MAX][VOLMAX];

int main() {
	int n, s, m;
    scanf("%d %d %d", &n, &s, &m);

    dp[0][s]=1;
    for(int i=1; i<=n; i++) scanf("%d", &V[i]);

    for(int i=1; i<=n; i++){
        bool check=false;
        for(int j=0; j<=m; j++){
            if(dp[i-1][j]==1){
                if(j-V[i]>=0){
                    dp[i][j-V[i]]=1;
                    check=true;
                }

                if(j+V[i]<=m){
                    dp[i][j+V[i]]=1;
                    check=true;
                }
            }
        }

        if(!check){
            printf("-1");
            return 0;
        }
    }

    int ans=-1;
    for(int i=0; i<=m; i++){
        if(dp[n][i]==1)
            ans=max(ans, i);
    }

    printf("%d", ans);

	return 0;
}