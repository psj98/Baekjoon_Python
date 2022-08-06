#include <iostream>
#include <algorithm>

using namespace std;

int arr[3];

int main() {
    for(int i=0; i<3; i++)
        scanf("%d", &arr[i]);

    sort(arr, arr+3);

    int a=arr[1]-arr[0];
    int b=arr[2]-arr[1];

    if(a>b) printf("%d", arr[1]-b);
    else if(b>a) printf("%d", arr[2]-a);
    else printf("%d", arr[2]+a);

    return 0;
}