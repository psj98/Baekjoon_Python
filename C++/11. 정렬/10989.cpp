// count sort
#include <iostream>
#define MAX 10001

using namespace std;

int arr[MAX];

int main(){
    int a, n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        arr[a]++;
    }

    for(int i=0; i<MAX; i++)
        for(int j=0; j<arr[i]; j++)
            printf("%d\n", i);
    
    return 0;
}