#include <iostream>
#include <queue>

using namespace std;

priority_queue<int, vector<int>> pq;

int main() {
    int a, n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(a==0){
            if(!pq.size()) printf("0\n");
            else{
                printf("%d\n", pq.top());
                pq.pop();
            }
        }

        else pq.push(a);
    }
    
    return 0;
}