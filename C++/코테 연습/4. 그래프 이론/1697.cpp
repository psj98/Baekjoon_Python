#include <iostream>
#include <queue>
#define MAX 100001

using namespace std;

int n, k;
bool visited[MAX];

void bfs(int a){
    queue<pair<int, int>> q;

    q.push(make_pair(a, 0));

    while(!q.empty()){
        int num=q.front().first;
        int cnt=q.front().second;
        q.pop();

        if(num==k){
            printf("%d", cnt);
            break;
        }

        if(num+1<MAX){
            if(!visited[num+1]){
                visited[num+1]=true;
                q.push(make_pair(num+1, cnt+1));
            }
        }

        if(num-1>=0){
            if(!visited[num-1]){
                visited[num-1]=true;
                q.push(make_pair(num-1, cnt+1));
            }
        }

        if(num*2<MAX){
            if(!visited[num*2]){
                visited[num*2]=true;
                q.push(make_pair(num*2, cnt+1));
            }
        }
    }
}

int main() {
    scanf("%d %d", &n, &k);

    visited[n]=true;
    bfs(n);
    
    return 0;
}