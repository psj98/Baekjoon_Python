#include <iostream>

using namespace std;

int main() {
    int a, c=0, d=0;

    for(int i=0; i<4; i++){
        scanf("%d", &a);
        c+=a;
    }

    for(int i=0; i<4; i++){
        scanf("%d", &a);
        d+=a;
    }

    printf("%d", max(c, d));

    return 0;
}