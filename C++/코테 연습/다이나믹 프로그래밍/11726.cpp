#include <iostream>
#define MAX 1000

using namespace std;

int arr[MAX+1]={1, 1, 2};

int main() {
    int n;
    scanf("%d", &n);

    for(int i=3; i<=n; i++){
        arr[i]=(arr[i-1]+arr[i-2])%10007;
    }

    printf("%d", arr[n]);
    
    return 0;
}