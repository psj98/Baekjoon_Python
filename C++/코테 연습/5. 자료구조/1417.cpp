#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> pq;

int main() {
    int a, n, m, cnt=0;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n-1; i++){
        scanf("%d", &a);
        pq.push(a);
    }

    while(1){
        if(pq.empty() || pq.top()<m) break;
        else{
            int k=pq.top();
            pq.pop();
            k--;
            
            pq.push(k);
            cnt++;
            m++;
        }
    }

    printf("%d", cnt);
    
    return 0;
}