#include <iostream>
#define MAX 10000

using namespace std;

int arr[MAX+1];
int cost[MAX+1];

int main() {
    int n, ans=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d", &cost[i]);

        if(i==1) arr[i]=cost[i];
        else if(i==2) arr[i]=cost[i]+cost[i-1];
        else{
            arr[i]=max(max(cost[i]+cost[i-1]+arr[i-3], cost[i]+arr[i-2]), arr[i-1]);
        }
    }

    printf("%d", arr[n]);
    
    return 0;
}