#include <iostream>
#include <queue>
#define MAX 1001

using namespace std;

int n, m, start;
int arr[MAX][MAX];
bool visited[MAX];
queue<int> q;

void dfs(int num){
    visited[num]=true;
    printf("%d ", num);

    for(int i=1; i<=n; i++){
        if(arr[num][i]==1 && !visited[i])
            dfs(i);
    }
}

void bfs(int num){
    q.push(num);
    visited[num]=true;

    while(!q.empty()){
        int idx=q.front();
        q.pop();

        printf("%d ", idx);

        for(int i=1; i<=n; i++){
            if(arr[idx][i]==1 && !visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
    }
}

int main() {
    scanf("%d %d %d", &n, &m, &start);

    for(int i=0; i<m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        arr[a][b]=arr[b][a]=1;
    }

    dfs(start);
    printf("\n");

    for(int i=0; i<=n; i++) visited[i]=false;
    bfs(start);

    return 0;
}