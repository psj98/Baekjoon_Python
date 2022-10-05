#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i=1; i<=n; i++)
        q.push(i);

    printf("<");

    while(q.size()){
        for(int i=0; i<k-1; i++){
            q.push(q.front());
            q.pop();
        }

        printf("%d", q.front());

        if(q.size()!=1) printf(", ");
        q.pop();
    }

    printf(">");
    
    return 0;
}