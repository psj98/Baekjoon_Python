#include <iostream>
#define MAX 1000

using namespace std;

int arr[MAX+1];
int cost[MAX+1];

int main() {
    int n, ans=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d", &cost[i]);

        for(int j=i-1; j>=0; j--){
            if(cost[i]>cost[j])
                arr[i]=max(arr[j]+1, arr[i]);
        }

        ans=max(ans, arr[i]);
    }

    printf("%d", ans);
    
    return 0;
}