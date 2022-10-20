#include <iostream>
#include <queue>
#define MAX 301

using namespace std;

int n, sx, sy, kx, ky;
bool visited[MAX][MAX];
int dx[8]={1, 2, 1, 2, -1, -2, -1, -2};
int dy[8]={2, 1, -2, -1, 2, 1, -2, -1};

void bfs(int x, int y){
    queue<pair<pair<int, int>, int>> q;

    q.push(make_pair(make_pair(x, y), 0));

    while(!q.empty()){
        int nx=q.front().first.first;
        int ny=q.front().first.second;
        int cnt=q.front().second;
        q.pop();

        if(nx==kx && ny==ky){
            printf("%d\n", cnt);
            break;
        }

        for(int i=0; i<8; i++){
            int tx=nx+dx[i];
            int ty=ny+dy[i];

            if(tx>=0 && tx<n && ty>=0 && ty<n && !visited[tx][ty]){
                visited[tx][ty]=true;
                q.push(make_pair(make_pair(tx, ty), cnt+1));
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d %d %d %d %d", &n, &sx, &sy, &kx, &ky);

        visited[sx][sy]=true;
        bfs(sx, sy);

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                visited[i][j]=false;
    }

    return 0;
}