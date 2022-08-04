#include <iostream>

using namespace std;

int main() {
    int a, n, sum=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d", &a);
        if(a!=i) sum++;
    }

    printf("%d", sum);

    return 0;
}