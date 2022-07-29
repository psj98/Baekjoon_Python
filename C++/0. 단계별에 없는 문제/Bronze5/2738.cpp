#include <iostream>

using namespace std;

int arr[101][101];

int main(){
    int a, n, m;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &arr[i][j]);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a);
            arr[i][j]+=a;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}