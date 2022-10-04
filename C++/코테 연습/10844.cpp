#include <iostream>
#define MAX 1000000000

using namespace std;

int arr[101][10];

int main() {
    int n, ans=0;
    scanf("%d", &n);

    for(int i=1; i<10; i++) arr[1][i]=1;
    
    for(int i=2; i<=n; i++){
        for(int j=0; j<10; j++){
            if(j==0) arr[i][j]=arr[i-1][j+1];
            else if(j==9) arr[i][j]=arr[i-1][j-1];
            else arr[i][j]=arr[i-1][j+1]+arr[i-1][j-1];
            
            arr[i][j]%=MAX;
        }
    }

    for(int i=0; i<10; i++)
        ans=(ans+arr[n][i])%MAX;
    
    printf("%d", ans);

    return 0;
}