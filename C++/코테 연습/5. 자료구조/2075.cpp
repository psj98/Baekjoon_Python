#include <iostream>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<>> pq;

int main() {
    int a, n;
    scanf("%d", &n);

    for(int i=0; i<n*n; i++){
        scanf("%d", &a);

        if(pq.size()<n) pq.push(a);
        else if(pq.top()<a) pq.push(a), pq.pop();
        else continue;
    }

    printf("%d", pq.top());

    return 0;
}