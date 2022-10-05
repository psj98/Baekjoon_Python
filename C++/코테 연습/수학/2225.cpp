#include <iostream>
#define MAX 1000000000

using namespace std;

int arr[201][201];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i=0; i<=n; i++)
        arr[1][i]=1;
    
    for(int i=0; i<=k; i++)
        arr[i][0]=1;

    for(int i=2; i<=k; i++){
        for(int j=1; j<=n; j++){
            arr[i][j]=(arr[i-1][j]+arr[i][j-1])%MAX;
        }
    }

    printf("%d", arr[k][n]);
    
    return 0;
}