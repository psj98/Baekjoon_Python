#include <iostream>
#define MAX 1000000

using namespace std;

int n, m;
int visited[MAX+1];

void dfs(int num){
    visited[num]++;
    if(visited[num]==3) return;
        
    int sum=0;
    while(num){
        int c=num%10;
        int d=c;
        for(int i=0; i<m-1; i++){
            c*=d;
        }
        sum+=c;
        num/=10;
    }

    dfs(sum);
}

int main(){
    int ans=0;
    scanf("%d %d", &n, &m);
    
    dfs(n);

    for(int i=1; i<MAX; i++)
        if(visited[i]==1)
            ans++;

    printf("%d", ans);

    return 0;
}