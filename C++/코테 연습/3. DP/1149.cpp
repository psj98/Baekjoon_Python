#include <iostream>
#define MAX 1000

using namespace std;

int arr[MAX+1][3]={{0, 0, 0}};
int rgb[3];

int main() {
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d %d %d", &rgb[0], &rgb[1], &rgb[2]);

        arr[i][0]=min(arr[i-1][1], arr[i-1][2])+rgb[0];
        arr[i][1]=min(arr[i-1][0], arr[i-1][2])+rgb[1];
        arr[i][2]=min(arr[i-1][0], arr[i-1][1])+rgb[2];
    }
    
    printf("%d", min(arr[n][0], min(arr[n][1], arr[n][2])));
    
    return 0;
}