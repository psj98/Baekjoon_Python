#include <iostream>

using namespace std;

int main() {
    while(1){
        int n, cnt=1;
        scanf("%d", &n);

        if(n==0) break;

        for(int i=0; i<n; i++){
            int a, b;
            scanf("%d %d", &a, &b);

            cnt=cnt*a-b;
        }

        printf("%d\n", cnt);
    }

    return 0;
}