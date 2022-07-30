#include <iostream>
#include <algorithm>

using namespace std;

int arr[4];

int main() {
	int sum=0;
    for(int i=0; i<4; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }

    sum-=*min_element(arr, arr+4);

    for(int i=0; i<2; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }

    sum-=*min_element(arr, arr+2);

    printf("%d", sum);

    return 0;
}