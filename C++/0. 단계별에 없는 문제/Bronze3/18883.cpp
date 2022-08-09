#include <iostream>

using namespace std;

int main() {
    int n, m, cnt=1;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(j==m-1) printf("%d", cnt++);
            else printf("%d ", cnt++);
        }
        printf("\n");
    }

    return 0;
}