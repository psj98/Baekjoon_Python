#include <iostream>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main() {
    int a, n, ans=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        pq.push(a);
    }

    int s=pq.size();

    for(int i=0; i<s-1; i++){
        int m=pq.top();
        pq.pop();

        m+=pq.top();
        pq.pop();

        ans+=m;

        pq.push(m);
    }

    printf("%d", ans);

    return 0;
}