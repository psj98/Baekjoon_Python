#include <iostream>
#define MAX 101

using namespace std;

int a[MAX][MAX];
int b[MAX][MAX];
int ans[MAX][MAX];

int main() {
    int n, m, k;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d", &m, &k);

    for(int i=0; i<m; i++)
        for(int j=0; j<k; j++)
            scanf("%d", &b[i][j]);

    for(int i=0; i<n; i++)
        for(int j=0; j<k; j++)
            for(int l=0; l<m; l++)
                ans[i][j]+=(a[i][l]*b[l][j]);

    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}