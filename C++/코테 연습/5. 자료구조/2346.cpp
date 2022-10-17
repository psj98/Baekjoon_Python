#include <iostream>
#include <queue>

using namespace std;

deque<pair<int, int>> dq;
queue<int> q;

int main() {
    int a, n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d", &a);
        dq.push_back(make_pair(i, a));
    }

    for(int i=0; i<n; i++){
        if(dq.front().second>0){
            int m=dq.front().second;
            q.push(dq.front().first);
            dq.pop_front();

            for(int i=0; i<m-1; i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }

        else if(dq.front().second<0){
            int m=dq.front().second;
            q.push(dq.front().first);
            dq.pop_front();

            for(int i=0; i<-m; i++){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    while(!q.empty()){
        printf("%d ", q.front());
        q.pop();
    }

    return 0;
}