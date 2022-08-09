#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int n;
        scanf("%d", &n);

        int arr[n];

        for(int j=0; j<n; j++)
            scanf("%d", &arr[j]);

        printf("%d %d\n", *min_element(arr, arr+n), *max_element(arr, arr+n));
    }

    return 0;
}