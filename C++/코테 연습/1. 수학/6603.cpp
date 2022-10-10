#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int ans[6], num[14];

void dfs(int s, int depth){
    if(depth==6){
        for(int i=0; i<6; i++)
            printf("%d ", ans[i]);
        printf("\n");
        return;
    }

    for(int i=s; i<n; i++){
        ans[depth]=num[i];
        dfs(i+1, depth+1);
    }
}

int main() {
    while(1){
        scanf("%d", &n);

        if(n==0) break;

        for(int i=0; i<n; i++){
            scanf("%d", &num[i]);
        }
        
        dfs(0, 0);

        printf("\n");
    }

    return 0;
}