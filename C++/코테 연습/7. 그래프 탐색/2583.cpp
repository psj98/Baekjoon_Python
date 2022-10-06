#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 101

using namespace std;

int m, n, k, cnt=0;
int map[MAX][MAX];
int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, -1, 1};
vector<int> v;

void dfs(int x, int y){
    cnt++;
    map[x][y]=1;

    for(int l=0; l<4; l++){
        int nx=x+dx[l];
        int ny=y+dy[l];
        if(nx>=0 && nx<m && ny>=0 && ny<n && !map[nx][ny])
            dfs(nx, ny);
    }
}

int main() {
    int ans=0;
    scanf("%d %d %d", &m, &n, &k);

    for(int i=0; i<k; i++){
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        for(int j=a; j<c; j++)
            for(int l=b; l<d; l++)
                map[l][j]=1;
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cnt=0;
            if(!map[i][j])
                dfs(i, j);

            if(cnt!=0){
                ans++;
                v.push_back(cnt);
            }
        }
    }

    sort(v.begin(), v.end());

    printf("%d\n", ans);

    for(int i=0; i<ans; i++)
        printf("%d ", v[i]);

    return 0;
}