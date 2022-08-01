#include <iostream>

using namespace std;

int arr[101];

int main() {
    int n, sum=0, cnt=-1;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]==1) sum++, cnt++;
        if(i>0 && arr[i-1]==1 && arr[i]==1) sum+=cnt;
        if(arr[i]==0) cnt=-1;
    }

    printf("%d", sum);

    return 0;
}