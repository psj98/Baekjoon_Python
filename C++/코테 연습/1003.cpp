#include <iostream>
#define MAX 40

using namespace std;

int arr[MAX+1][2]={{1, 0}, {0, 1}};

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a;
        scanf("%d", &a);

        for(int j=2; j<=a; j++){
            arr[j][0]=arr[j-1][0]+arr[j-2][0];
            arr[j][1]=arr[j-1][1]+arr[j-2][1];
        }

        printf("%d %d\n", arr[a][0], arr[a][1]);
    } 
    
    return 0;
}