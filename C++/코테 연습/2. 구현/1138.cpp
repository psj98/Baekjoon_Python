#include <iostream>

using namespace std;

int arr[11];

int main() {
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        int a, cnt=0;
        scanf("%d", &a);

        for(int j=1; j<=n; j++){
            if(cnt==a && arr[j]==0){
                arr[j]=i;
                break;
            }

            if(arr[j]==0) cnt++;
        }
    }

    for(int i=1; i<=n; i++)
        printf("%d ", arr[i]);

    return 0;
}