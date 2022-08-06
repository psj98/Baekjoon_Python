#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a, b;
        scanf("%d", &a);

        if(a%2==0) b=a/2-1;
        else b=a/2;

        printf("Pairs for %d: ", a);

        for(int j=1; j<b; j++)
            printf("%d %d, ", j, a-j);

        if(b!=0) printf("%d %d", b, a-b);
        printf("\n");
    }

    return 0;
}