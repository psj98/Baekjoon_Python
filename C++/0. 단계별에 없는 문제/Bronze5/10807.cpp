#include <iostream>

using namespace std;

int arr[201];

int main(){
    int a, n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        arr[a+100]++;
    }

    scanf("%d", &a);
    printf("%d", arr[a+100]);

    return 0;
}