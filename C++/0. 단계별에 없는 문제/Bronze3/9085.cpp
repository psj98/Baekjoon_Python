#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int m, sum=0;
        scanf("%d", &m);

        for(int j=0; j<m; j++){
            int a;
            scanf("%d", &a);
            sum+=a;
        }
        printf("%d\n", sum);
    }

    return 0;
}