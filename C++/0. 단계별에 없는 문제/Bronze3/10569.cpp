#include <iostream>

using namespace std;

int main() {
    int n, x, y;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        printf("%d\n", 2-x+y);
    }

    return 0;
}