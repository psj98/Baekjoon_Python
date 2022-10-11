#include <iostream>
#define MAX 1002

using namespace std;

int arr[MAX][MAX];
int dx[4]={1, 0, -1, 0};
int dy[4]={0, 1, 0, -1};

int main() {
    int n, m, k, cnt=0, x=0, y=1;
    scanf("%d %d %d", &n, &m, &k);

    for(int i=0; i<MAX; i++)
        arr[i][0]=arr[0][i]=arr[m+1][i]=arr[i][n+1]=1;

    for(int i=1; i<=n*m; i++){
        x+=dx[cnt%4], y+=dy[cnt%4];
        arr[x][y]=1;
        if(arr[x+dx[cnt%4]][y+dy[cnt%4]]) cnt++;
        if(i==k){
            printf("%d %d", y, x);
            return 0;
        }
    }

    printf("0");

    return 0;
}