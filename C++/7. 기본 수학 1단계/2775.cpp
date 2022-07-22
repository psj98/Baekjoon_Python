#include <iostream>

using namespace std;

int arr[15];

int main(){
    int t, k, n;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        for(int i=1; i<=14; i++)
            arr[i]=i;

        scanf("%d %d", &k, &n);

        if(n==1){
            printf("1\n");
            continue;
        }

        for(int j=1; j<=k; j++)
            for(int l=2; l<=n; l++)
                arr[l]+=arr[l-1];

        printf("%d\n", arr[n]);
    }

    return 0;
}