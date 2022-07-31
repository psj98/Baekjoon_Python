#include <iostream>
#include <algorithm>

using namespace std;

int arr[4];

int main() {
    int a, b, d=0;
    for(int i=0; i<4; i++){
        scanf("%d %d", &a, &b);
        d+=b-a;
        arr[i]=d;
    }

    printf("%d", *max_element(arr, arr+4));
    
    return 0;
}