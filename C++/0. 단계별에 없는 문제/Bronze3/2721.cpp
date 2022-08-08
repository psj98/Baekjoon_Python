#include <iostream>

using namespace std;

int arr[302];

int main() {
    int n;
    scanf("%d", &n);

    for(int i=1; i<=301; i++)
        arr[i]=i*(i+1)/2;

    for(int i=0; i<n; i++){
        int m, sum=0;
        scanf("%d", &m);

        for(int j=1; j<=m; j++)
            sum+=arr[j+1]*j;
        
        printf("%d\n", sum);
    }

    return 0;
}