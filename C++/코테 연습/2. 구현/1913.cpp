#include <iostream>
#define MAX 1001

using namespace std;

int arr[MAX][MAX];
int dx[4]={-1, 0, 1, 0};
int dy[4]={0, 1, 0, -1};

int main() {
    int n, m, cnt=0, check=0, num=1, nx, ny;
    scanf("%d %d", &n, &m);

    int x=(n+1)/2;
    int y=(n+1)/2;
    arr[x][y]=1;

    for(int i=2; i<=n*n; i++){
        for(int j=0; j<num; j++){
            x+=dx[cnt%4];
            y+=dy[cnt%4];
            arr[x][y]=i++;
        }

        cnt++;
        check++;
        i--;

        if(check==2){
            num++;
            check=0;
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(arr[i][j]==m){
                nx=i, ny=j;
            }
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    printf("%d %d", nx, ny);

    return 0;
}