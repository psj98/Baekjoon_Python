#include <iostream>

using namespace std;

int main() {
    int a, n, sum=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        sum+=a-1;
    }

    printf("%d", sum+1);

    return 0;
}