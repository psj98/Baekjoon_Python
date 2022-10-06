#include <iostream>
#include <algorithm>
#define MAX 1024
#define PARENT_MAX 10 // log(2, 1024);

using namespace std;
 
int N, M;
int map[MAX][MAX];
int visited[MAX];
int parent[MAX][PARENT_MAX];
int depth[MAX];

// Make Tree
void dfs(int now){
    visited[now]=1;

    for(int i=1; i<MAX; i++){
        if(!visited[i] && map[now][i]==1){
            parent[i][0]=now; // parent
            depth[i]=depth[now]+1; // depth
            dfs(i);
        }
    }
}
 
int main(){
    int t;
    scanf("%d", &t);

    for(int i=1; i<MAX/2; i++){
        map[i][i*2]=map[i*2][i]=1;
        map[i][i*2+1]=map[i*2+1][i]=1;
    }

    dfs(1);

    // 2^k번째 부모 배열에 채움
    for(int i=0; i<PARENT_MAX; i++)
        for(int j=1; j<MAX; j++)
            if(parent[j][i]!=0)
                parent[j][i+1]=parent[parent[j][i]][i];

    for(int i=0; i<t; i++){
        int a, b;
        scanf("%d %d", &a, &b);
 
        // depth[a]>=depth[b]로 맞춤
        if(depth[a]<depth[b]) swap(a, b);

        int diff=depth[a]-depth[b];
 
        // depth가 같아질 때까지 옮김
        for(int j=0; diff!=0; j++){
            if(diff%2) a=parent[a][j];
            diff/=2;
        }
 
        // a와 b가 다르면 동시에 일정 높이만큼 위로 이동시킴
        if(a!=b){
            for(int j=PARENT_MAX-1; j>=0; j--){
                if(parent[a][j]!=0 && parent[a][j]!=parent[b][j]){
                    a=parent[a][j];
                    b=parent[b][j];
                }
            }
            // 마지막엔 두 정점 a, b의 부모가 같으므로 한 번 더 올림
            a=parent[a][0];
        }
 
        // LCA 출력
        printf("%d\n", a*10);
    }

    return 0;
}