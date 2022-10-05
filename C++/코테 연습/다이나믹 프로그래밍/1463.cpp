#include <iostream>
#define MAX 1000000

using namespace std;

int arr[MAX+1]={0, 0, 1, 1};

int main() {
    int a, n;
    scanf("%d", &n);

    for(int i=4; i<=n; i++){
        a=arr[i-1]+1;

        if(i%2==0){
            a=min(a, arr[i/2]+1);
        }

        if(i%3==0){
            a=min(a, arr[i/3]+1);
        }

        arr[i]=a;
    }

    printf("%d", arr[n]);
    
    return 0;
}