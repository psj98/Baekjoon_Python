#include <iostream>
#include <algorithm>

using namespace std;

int arr[10];

int main() {
    int sum=0;
    for(int i=0; i<10; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        sum+=b-a;
        arr[i]=sum;
    }

    printf("%d", *max_element(arr, arr+10));

    return 0;
}