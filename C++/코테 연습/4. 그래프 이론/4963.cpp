#include <iostream>
#include <queue>
#define MAX 51

using namespace std;

int n, m;
int map[MAX][MAX];
bool visited[MAX][MAX];
int dx[8]={1, -1, 0, 0, 1, 1, -1, -1};
int dy[8]={0, 0, 1, -1, 1, -1, 1, -1};

void dfs(int x, int y){
    for(int i=0; i<8; i++){
        int nx=x+dx[i];
        int ny=y+dy[i];

        if(nx>0 && nx<=m && ny>0 && ny<=n && map[nx][ny]==1 && !visited[nx][ny]){
            visited[nx][ny]=1;
            dfs(nx, ny);
        }
    }
}

int main() {
    while(1){
        int cnt=0;
        scanf("%d %d", &n, &m);

        if(n==0 && m==0) break;
        
        for(int i=1; i<=m; i++)
            for(int j=1; j<=n; j++)
                scanf("%d", &map[i][j]);

        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(!visited[i][j] && map[i][j]==1){
                    visited[i][j]=true;
                    dfs(i, j);
                    cnt++;
                }
            }
        }

        printf("%d\n", cnt);

        for(int i=1; i<=m; i++)
            for(int j=1; j<=n; j++)
                visited[i][j]=false;
    }
    
    return 0;
}