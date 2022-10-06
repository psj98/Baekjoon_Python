#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 50001
#define PARENT_MAX 17

using namespace std;
 
int n, m;
int visited[MAX];
int parent[MAX][PARENT_MAX];
int depth[MAX];
vector<int> v[MAX];

void dfs(int now){
    visited[now]=1;

    for(int i=0; i<v[now].size(); i++){
        if(!visited[v[now][i]]){
            parent[v[now][i]][0]=now; // parent
            depth[v[now][i]]=depth[now]+1; // depth
            dfs(v[now][i]);
        }
    }
}
 
int main(){
    scanf("%d", &n);

    for(int i=0; i<n-1; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(1);

    // 2^k번째 부모 배열에 채움
    for(int i=0; i<PARENT_MAX; i++)
        for(int j=1; j<=n; j++)
            if(parent[j][i]!=0)
                parent[j][i+1]=parent[parent[j][i]][i];

    scanf("%d", &m);
    for(int i=0; i<m; i++){
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
        printf("%d\n", a);
    }

    return 0;
}