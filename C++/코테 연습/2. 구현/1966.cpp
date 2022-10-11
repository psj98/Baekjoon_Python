#include <iostream>
#include <queue>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        int a, n, m, cnt=0;
        scanf("%d %d", &n, &m);

        for(int j=0; j<n; j++){
            scanf("%d", &a);
            q.push(make_pair(a, j));
            pq.push(a);
        }

        while(!q.empty()){
            int index=q.front().second;
            int num=q.front().first;
            q.pop();

            if(pq.top()==num){
                pq.pop();
                cnt++;

                if(index==m){
                    printf("%d\n", cnt);
                    break;
                }
            }

            else q.push(make_pair(num, index));
        }
    }

    return 0;
}