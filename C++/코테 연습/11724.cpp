#include <iostream>
#define MAX 1001

using namespace std;

int n, m, cnt=0;
int map[MAX][MAX];
int visited[MAX];

void dfs(int num){
    visited[num]=1;
    cnt++;

    for(int i=1; i<=n; i++){
        if(visited[i]==0 && map[num][i]==1)
            dfs(i);
    }
}

int main() {
    int ans=0;
    scanf("%d %d", &n, &m);

    for(int i=0; i<m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        map[a][b]=map[b][a]=1;
    }

    for(int i=1; i<=n; i++){
        cnt=0;
        if(visited[i]==0) dfs(i);
        if(cnt!=0) ans++;
    }

    printf("%d", ans);

    return 0;
}