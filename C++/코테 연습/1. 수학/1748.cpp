#include <iostream>

typedef long long ll;
using namespace std;

ll dp[16][16];

int main() {
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);

    dp[1][1]=1;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            dp[i][j]+=dp[i-1][j]+dp[i][j-1];

    if(a!=0){
        int x, y;
        if(a%m==0){
            x=a/m;
            y=m;
        }
        
        else{
            y=a%m;
            x=(a-y)/m+1;
        }

        printf("%lld", dp[x][y]*dp[n-x+1][m-y+1]);
    }
    
    else printf("%lld", dp[n][m]);


    return 0;
}