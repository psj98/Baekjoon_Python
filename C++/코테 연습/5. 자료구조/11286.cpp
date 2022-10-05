#include <iostream>
#include <queue>

using namespace std;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int main() {
    int a, n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(a==0){
            if(pq.empty()) printf("0\n");
            else{
                printf("%d\n", pq.top().second);
                pq.pop();
            }
        }

        else pq.push(make_pair(abs(a), a));
    }
    
    return 0;
}