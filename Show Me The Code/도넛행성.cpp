#include <iostream>
#include <queue>
#define MAX 1000

using namespace std;

int n, m, ans=0;
int arr[MAX][MAX];
int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};

void bfs(int a, int b){
    queue<pair<int, int>> q;
    q.push({a, b});

    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        
        q.pop();

        for(int i=0; i<4; i++){
            int nx=dx[i]+x;
            int ny=dy[i]+y;

            nx=(nx+n)%n;
            ny=(ny+m)%m;

            if(arr[nx][ny]==0){
                q.push({nx, ny});
                arr[nx][ny]=2;
            }
        }
    }

    return;
}

int main(){
    cin >> n >> m;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> arr[i][j];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==0){
                bfs(i, j);
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}