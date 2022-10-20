#include <iostream>
#include <queue>
#define MAX 100001

using namespace std;

int n, k;
bool visited[MAX];

void bfs(int a){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

    q.push(make_pair(0, a));

    while(!q.empty()){
        int cnt=q.top().first;
        int num=q.top().second;
        q.pop();

        if(num==k){
            printf("%d", cnt);
            break;
        }

        if(num+1<MAX && !visited[num+1]){
            visited[num+1]=true;
            q.push(make_pair(cnt+1, num+1));
        }

        if(num-1>=0 && !visited[num-1]){
            visited[num-1]=true;
            q.push(make_pair(cnt+1, num-1));
        }

        if(num*2<MAX && !visited[num*2]){
            visited[num*2]=true;
            q.push(make_pair(cnt, num*2));
        }
    }
}

int main() {
    scanf("%d %d", &n, &k);

    visited[n]=true;
    bfs(n);
    
    return 0;
}