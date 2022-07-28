#include <iostream>
#define MAX 31

using namespace std;

int arr[MAX][MAX];

int main(){
    int t, n, m;
    scanf("%d", &t);

    for(int i=1; i<MAX; i++)
        arr[i][0]=arr[i][i]=1;

    for(int i=2; i<MAX; i++)
        for(int j=1; j<i; j++)
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];

    for(int i=0; i<t; i++){
        scanf("%d %d", &n, &m);
        printf("%d\n", arr[m][n]);
    }

    return 0;
}