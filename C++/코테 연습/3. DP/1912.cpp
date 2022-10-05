#include <iostream>
#define MAX 100000

using namespace std;

int arr[MAX+1]={-1001};

int main() {
    int n, cost, ans=-1001;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d", &cost);

        arr[i]=max(arr[i-1]+cost, cost);

        ans=max(ans, arr[i]);
    }

    printf("%d", ans);
    
    return 0;
}