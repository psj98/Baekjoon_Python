#include <iostream>
#define MAX 20000001

using namespace std;

int arr[MAX];

int main(){
    int a, n, m;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        arr[a+10000000]++;
    }

    scanf("%d", &m);

    for(int i=0; i<m; i++){
        scanf("%d", &a);
        printf("%d ", arr[a+10000000]);
    }

    return 0;
}