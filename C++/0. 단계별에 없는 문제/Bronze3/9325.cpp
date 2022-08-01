#include <iostream>

using namespace std;

int main() {
    int a, n, m, b, c;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &m);

        for(int j=0; j<m; j++){
            scanf("%d %d", &b, &c);
            a+=b*c;
        }
        
        printf("%d\n", a);
    }

    return 0;
}