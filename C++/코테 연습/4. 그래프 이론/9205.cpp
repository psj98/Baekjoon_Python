#include <iostream>
#include <vector>
#define MAX 102

using namespace std;

int n;
int map[MAX][MAX];
bool visited[MAX];

void dfs(int a){
    visited[a]=true;

    for(int i=0; i<n+2; i++){
        if(map[a][i]==1 && !visited[i])
            dfs(i);
    }
}

int main() {
    int a, b, t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        vector<pair<int, int>> v;
        scanf("%d", &n);

        for(int j=0; j<n+2; j++){
            scanf("%d %d", &a, &b);
            v.push_back(make_pair(b, a));
        }

        for(int j=0; j<n+1; j++){
            for(int k=j+1; k<n+2; k++){
                int sum=abs(v[j].first-v[k].first)+abs(v[j].second-v[k].second);

                if(sum<=1000) map[j][k]=map[k][j]=1;
            }
        }

        dfs(0);

        if(visited[n+1]) printf("happy\n");
        else printf("sad\n");

        for(int j=0; j<n+2; j++)
            visited[j]=false;

        for(int j=0; j<n+2; j++){
            for(int k=0; k<n+2; k++){
                map[j][k]=0;
            }
        }
    }

    return 0;
}