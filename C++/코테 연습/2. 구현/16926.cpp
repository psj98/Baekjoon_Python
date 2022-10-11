#include <iostream>
#define MAX 301

using namespace std;

int arr[MAX][MAX];
int dx[4]={-1, 0, 1, 0};
int dy[4]={0, 1, 0, -1};

int main() {
    int n, m, r;
    scanf("%d %d %d", &n, &m, &r);

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &arr[i][j]);

    while(r--){
        int x1=0, y1=0;
        int x2=n-1, y2=0;
        int x3=n-1, y3=m-1;
        int x4=0, y4=m-1;

        while((x1<x2)&&(y1<y4)){
            int t=arr[x1][y1];

            for(int i=y1; i<y4; i++)
                arr[x1][i]=arr[x1][i+1];

            for(int i=x4; i<x3; i++)
                arr[i][y3]=arr[i+1][y3];

            for(int i=y3; i>y2; i--)
                arr[x2][i]=arr[x2][i-1];

            for (int i=x2; i>x1; i--)
                arr[i][y1]=arr[i-1][y1];

            arr[x1+1][y1]=t;
            x1++, y1++;
            x2--, y2++;
            x3--, y3--;
            x4++, y4--;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}