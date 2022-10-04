#include <iostream>
#define MAX 101

using namespace std;

int n, cnt=0;
int map[MAX][MAX];

/* 폴로이드-워셜 알고리즘 */
void floyd(){
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            for(int k=0; k<n; k++)
                if(map[j][i] && map[i][k]) // (j,i)->(i,k) 이면, (j,k)=1
                    map[j][k]=1;
}

int main() {
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &map[i][j]);

    floyd();

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            printf("%d ", map[i][j]);
        printf("\n");
    }

    return 0;
}