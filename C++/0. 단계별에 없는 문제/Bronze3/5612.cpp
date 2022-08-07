#include <iostream>
#include <algorithm>

using namespace std;

int arr[10001];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    arr[0]=m;

    for(int i=1; i<=n; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        arr[i]=arr[i-1]+a-b;
        if(arr[i]<0){
            printf("0");
            return 0;
        }
    }

    printf("%d", *max_element(arr, arr+n+1));

    return 0;
}