#include <iostream>
#include <queue>
#define MAX 101

using namespace std;

int n, m;
int map[MAX][MAX];
int cnt[MAX][MAX];
bool visited[MAX];

void bfs(int a){
    queue<int> q;

    q.push(a);
    visited[a]=true;

    while(!q.empty()){
        int x=q.front();
        q.pop();

        for(int i=1; i<=n; i++){
            if(map[x][i]>0){
                int num=i;
                if(!visited[num]){
                    visited[num]=true;
                    q.push(num);

                    cnt[a][num]=cnt[a][x]+1;
                    cnt[num][a]=cnt[x][a]+1;
                }
            }
        }
    }
}

int main() {
    int a, b, ans=10000000, stu=-1;
    scanf("%d %d", &n, &m);

    for(int i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        map[a][b]=map[b][a]=1;
    }

    for(int i=1; i<=n; i++){
        bfs(i);

        for(int j=1; j<=n; j++)
            visited[j]=false;
    }

    for(int i=1; i<=n; i++){
        int sum=0;
        for(int j=1; j<=n; j++){
            sum+=cnt[i][j];
        }
        
        if(ans>sum){
            ans=sum;
            stu=i;
        }
    }

    printf("%d", stu);

    return 0;
}