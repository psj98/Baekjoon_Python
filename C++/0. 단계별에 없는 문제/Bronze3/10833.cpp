#include <iostream>

using namespace std;

int main() {
    int a, b, n, sum=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        int c=b/a;
        sum+=b-(a*c);        
    }

    printf("%d", sum);

    return 0;
}