#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000001];

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("%d %d", *min_element(arr, arr+n), *max_element(arr, arr+n));

    return 0;
}