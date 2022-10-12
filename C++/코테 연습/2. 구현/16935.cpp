#include <iostream>

using namespace std;

int arr[101][101];
int temp[101][101];

int main() {
    int n, m, r;
    scanf("%d %d %d", &n, &m, &r);

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &arr[i][j]);

    while(r--){
        int a;
        scanf("%d", &a);

        // 상하 반전
        if(a==1){
            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                    temp[i][j]=arr[n-i-1][j];

            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                    arr[i][j]=temp[i][j];
        }

        // 좌우 반전
        else if(a==2){
            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                    temp[i][j]=arr[i][m-j-1];

            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                    arr[i][j]=temp[i][j];
        }

        // 오른쪽 90도
        else if(a==3){
            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                    temp[j][n-i-1]=arr[i][j];

            int t=n;
            n=m;
            m=t;

            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                    arr[i][j]=temp[i][j];
        }

        // 왼쪽 90도
        else if(a==4){
            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                    temp[m-j-1][i]=arr[i][j];

            int t=n;
            n=m;
            m=t;

            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                    arr[i][j]=temp[i][j];
        }

        // 시계 방향
        else if(a==5){
            for(int i=0; i<n/2; i++){
                for(int j=0; j<m/2; j++){
                    temp[i][j+m/2]=arr[i][j];
                    temp[i+n/2][j+m/2]=arr[i][j+m/2];
                    temp[i+n/2][j]=arr[i+n/2][j+m/2];
                    temp[i][j]=arr[i+n/2][j];
                }
            }

            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                    arr[i][j]=temp[i][j];
        }

        // 반시계 방향
        else if(a==6){
            for(int i=0; i<n/2; i++){
                for(int j=0; j<m/2; j++){
                    temp[i+n/2][j]=arr[i][j];
                    temp[i][j]=arr[i][j+m/2];
                    temp[i][j+m/2]=arr[i+n/2][j+m/2];
                    temp[i+n/2][j+m/2]=arr[i+n/2][j];
                }
            }

            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                    arr[i][j]=temp[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

	return 0;
}