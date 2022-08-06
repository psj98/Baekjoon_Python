#include <iostream>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int n, k, sum=0;
        scanf("%d %d", &n, &k);

        for(int j=0; j<n; j++){
            int a;
            scanf("%d", &a);

            sum+=a/k;
        }

        printf("%d\n", sum);
    }

    return 0;
}