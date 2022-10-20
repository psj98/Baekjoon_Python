#include <iostream>
#include <vector>
#define MAX 10001

using namespace std;

int n, m, ans=0, chk=-1;
vector<int> map[MAX];
int cnt[MAX];
bool visited[MAX];

void dfs(int a){
    visited[a]=true;

    for(int i=0; i<map[a].size(); i++){
        int v=map[a][i];
        if(!visited[v]){
            dfs(v);
            ans++;
        }
    }
}

int main() {
    int a, b;
    scanf("%d %d", &n, &m);
    
    for(int i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        map[b].push_back(a);
    }

    for(int i=1; i<=n; i++){
        dfs(i);

        cnt[i]=ans;

        if(chk<ans) chk=ans;

        for(int j=0; j<=n; j++) visited[j]=false;
        ans=0;
    }

    for(int i=1; i<=n; i++)
        if(cnt[i]==chk) printf("%d ", i);

    return 0;
}