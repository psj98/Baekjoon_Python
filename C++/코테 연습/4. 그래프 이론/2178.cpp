#include <iostream>
#include <queue>
#define MAX 100

using namespace std;

int n, m;
int arr[MAX][MAX]; // ÁÂÇ¥ º° ÃÖ¼Ú°ª
int dx[4]={-1, 1, 0, 0}; // »óÇÏÁÂ¿ì
int dy[4]={0, 0, -1, 1};
string coord[MAX]; // ÁÂÇ¥ »ó ±æ Ç¥½Ã [0, 1]
queue<pair<int, int>> q; // ÇöÀç ÁÂÇ¥ queue

void bfs(int x, int y){
    q.push(make_pair(x, y));
    arr[x][y]=1;

    while(!q.empty()){
        x=q.front().first;
        y=q.front().second;
        q.pop();

        for(int i=0; i<4; i++){
            int tx=x+dx[i];
            int ty=y+dy[i];
            if(tx>=0 && tx<n && ty>=0 && ty<m && coord[tx][ty]=='1' && arr[tx][ty]==0){
                q.push(make_pair(tx, ty));
                arr[tx][ty]=arr[x][y]+1;
            }
        }
    }
}

int main() {
    cin >> n >> m;

    for(int i=0; i<n; i++)
        cin >> coord[i];

    bfs(0, 0);
    cout << arr[n-1][m-1];

    return 0;
}