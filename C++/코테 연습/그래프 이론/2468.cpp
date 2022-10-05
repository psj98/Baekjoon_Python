#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 101

using namespace std;

int n, cnt=0, max_h;
int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, -1, 1};
int map[MAX][MAX];
int visited[MAX][MAX];
vector<int> v;

void dfs(int x, int y, int height){
    visited[x][y]=1;
    cnt++;

    for(int i=0; i<4; i++){
        int tx=dx[i]+x;
        int ty=dy[i]+y;
        if(tx>=0 && tx<n && ty>=0 && ty<n && map[tx][ty]>=height && visited[tx][ty]==0)
            dfs(tx, ty, height);
    }
}

int main() {
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &map[i][j]);

    max_h=*max_element(map[0], map[0]+n);
    for(int i=1; i<n; i++)
        max_h=max(max_h, *max_element(map[i], map[i]+n));

    for(int k=0; k<=max_h; k++){
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cnt=0;
                if(map[i][j]>=k && visited[i][j]==0)
                    dfs(i, j, k);

                if(cnt!=0) ans++;
            }
        }

        v.push_back(ans);

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                visited[i][j]=0;
    }
    
    printf("%d", *max_element(v.begin(), v.end()));

    return 0;
}