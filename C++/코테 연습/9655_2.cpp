#include <iostream>

using namespace std;

int arr[1001]={0, 1, 2};

int main() {
    int n;
    scanf("%d", &n);

    for(int i=3; i<=n; i++)
        arr[i]=min(arr[i-1]+1, arr[i-3]+1);

    if(n%2==0) printf("CY");
    else printf("SK");
    
    return 0;
}