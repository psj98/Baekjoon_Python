#include <iostream>
#define MAX 101

using namespace std;

int m, n, x, y, ans=0;
int map[MAX][MAX];
int visited[MAX];

void dfs(int num, int cnt){
    visited[num]=1;

    if(num==y){
        ans=cnt;
        for(int i=1; i<=n; i++)
            visited[i]=1;
    }

    for(int i=1; i<=n; i++){
        if(visited[i]==0 && map[num][i]==1)
            dfs(i, cnt+1);
    }
}

int main() {
    scanf("%d %d %d %d", &n, &x, &y, &m);

    for(int i=0; i<m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        map[a][b]=map[b][a]=1;
    }

    dfs(x, 0);

    if(ans!=0) printf("%d", ans);
    else printf("-1");

    return 0;
}