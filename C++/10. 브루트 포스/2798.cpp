#include <iostream>
#define MAX 101

using namespace std;

int arr[MAX];

int main(){
    int n, m, ans=0;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum<=m && ans<sum)
                    ans=sum;
            }
        }
    }

    printf("%d", ans);

    return 0;
}