#include <iostream>
#include <vector>
#define MAX 100001

using namespace std;

int n;
int visited[MAX];
int parent[MAX];
vector<int> v[MAX];

void dfs(int num){
    visited[num]=1;

    for(int i=0; i<v[num].size(); i++){
        if(visited[v[num][i]]==0){
            parent[v[num][i]]=num;
            dfs(v[num][i]);
        }
    }
}

int main() {
    scanf("%d", &n);

    for(int i=0; i<n-1; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(1);

    for(int i=2; i<=n; i++)
        printf("%d\n", parent[i]);

    return 0;
}