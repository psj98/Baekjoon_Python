#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int n, m, b, time=INT_MAX, height=0;
    scanf("%d %d %d", &n, &m, &b);

    int arr[n][m];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &arr[i][j]);

    for(int i=0; i<=256; i++){
        int add=0, remove=0;
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                int check=arr[j][k]-i;
                if(check>0) remove+=check;
                else add+=(-check);
            }
        }

        if(remove+b>=add){
            int t=add+remove*2;
            if(time>=t){
                time=t;
                height=i;
            }
        }
    }

    printf("%d %d", time, height);
    
    return 0;
}