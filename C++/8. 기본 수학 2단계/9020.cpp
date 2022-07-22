#include <iostream>
#define MAX 10001

using namespace std;

int arr[MAX];

int main(){
    int a, n;
    scanf("%d", &n);

    for(int i=2; i<MAX; i++)
        for(int j=2; i*j<MAX; j++)
            if(!arr[i*j])
                arr[i*j]=true;

    for(int i=0; i<n; i++){
        scanf("%d", &a);

        for(int j=a/2; j>1; j--){
            if(!arr[j] && !arr[a-j]){
                printf("%d %d\n", j, a-j);
                break;
            }
        }
    }

    return 0;
}