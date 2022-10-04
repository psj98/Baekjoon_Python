#include <iostream>
#define MAX 51

using namespace std;

int a, b, c, n, cnt=0;
int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, -1, 1};
int map[MAX][MAX];

void dfs(int x, int y){
    map[x][y]=2;
    cnt++;

    for(int i=0; i<4; i++){
        int tx=dx[i]+x;
        int ty=dy[i]+y;
        if(tx>=0 && tx<b && ty>=0 && ty<a && map[tx][ty]==1)
            dfs(tx, ty);
    }
}

int main() {
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int ans=0;
        scanf("%d %d %d", &a, &b, &c);

        for(int j=0; j<c; j++){
            int ax, ay;
            scanf("%d %d", &ax, &ay);
            map[ay][ax]=1;
        }

        for(int j=0; j<b; j++){
            for(int k=0; k<a; k++){
                cnt=0;
                if(map[j][k]==1)
                    dfs(j, k);

                if(cnt!=0) ans++;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}