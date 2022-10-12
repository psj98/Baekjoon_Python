#include <iostream>
#include <queue>

using namespace std;

queue<int> q;
queue<int> e;

int main() {
    int a, n, w, l, cnt=0, sum=0, now=0;
    scanf("%d %d %d", &n, &w, &l);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        q.push(a);
    }

    while(!q.empty()){
        if(e.size()==w){
            sum-=e.front();
            e.pop();
        }

        if(sum+q.front()<=l){
            e.push(q.front());
            sum+=q.front();
            q.pop();
        }

        else e.push(0);

        cnt++;
    }

    printf("%d", cnt+w);

    return 0;
}