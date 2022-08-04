#include <iostream>
#include <algorithm>

using namespace std;

int arr[81];

int main() {
    int n, m;
    for(int i=0; i<81; i++)
        scanf("%d", &arr[i]);

    m=*max_element(arr, arr+81);

    for(int i=0; i<81; i++){
        if(arr[i]==m){
            n=i;
            break;
        }
    }

    printf("%d\n%d %d", m, n/9+1, n%9+1);

    return 0;
}