#include <iostream>

using namespace std;

int arr[101];
int main() {
    int n; // 스위치 개수
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        scanf("%d", &arr[i]);

    int m; // 학생 수
    scanf("%d", &m);

    for(int i=0; i<m; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        if(a==1){
            for(int j=1; j<=n; j++){
                if(j%b==0){
                    if(arr[j]==1) arr[j]=0;
                    else arr[j]=1;
                }
            }
        }

        else{
            if(arr[b]==1) arr[b]=0;
            else arr[b]=1;

            for(int j=1; j<=(n-1)/2; j++){
                if(b-j==0 || b+j==n+1) break;

                if(arr[b-j]==arr[b+j]){
                    if(arr[b-j]==1) arr[b-j]=arr[b+j]=0;
                    else arr[b-j]=arr[b+j]=1;
                }

                else break;
            }
        }
    }

    for(int i=0; i<=n/20; i++){
        if(i!=n/20)
            for(int j=1; j<=20; j++)
                printf("%d ", arr[i*20+j]);

        else
            for(int j=1; j<=n%20; j++)
                printf("%d ", arr[i*20+j]);

        printf("\n");
    }

    return 0;
}